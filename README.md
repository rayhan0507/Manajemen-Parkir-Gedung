# 🅿️ Manajemen Parkir Gedung

<div align="center">

### 🚗 Smart Parking Management System

**Tugas Besar Struktur Data — Kelompok Bersiaplah**

[![C++](https://img.shields.io/badge/C++-17-00599C?style=for-the-badge&logo=cplusplus)](https://isocpp.org/)
[![Data Structure](https://img.shields.io/badge/Data_Structure-MLL%20%7C%20BST-8A2BE2?style=for-the-badge)](#-data-structure)
[![Status](https://img.shields.io/badge/Development-In_Progress-orange?style=for-the-badge)](#-development-progress)

*Mengelola parkir lebih terstruktur dengan implementasi Multi Linked List dan Binary Search Tree.*

</div>

---

<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 1280 320" width="1280" height="320" role="img" aria-label="Banner proyek Manajemen Parkir Gedung" xmlns:c2pa="http://c2pa.org/manifest">
  <defs>
    <linearGradient id="bg" x1="0" y1="0" x2="1" y2="1">
      <stop offset="0" stop-color="#4F46E5"/>
      <stop offset="0.55" stop-color="#8B5CF6"/>
      <stop offset="1" stop-color="#EC4899"/>
    </linearGradient>
    <pattern id="dots" width="28" height="28" patternUnits="userSpaceOnUse">
      <circle cx="4" cy="4" r="2" fill="#FFFFFF" opacity="0.18"/>
    </pattern>
    <pattern id="stripes" width="64" height="64" patternUnits="userSpaceOnUse" patternTransform="rotate(-30)">
      <rect x="0" y="0" width="6" height="64" fill="#FFFFFF" opacity="0.06"/>
    </pattern>
  </defs>

  <!-- Background + pattern -->
  <rect width="1280" height="320" fill="url(#bg)"/>
  <rect width="1280" height="320" fill="url(#stripes)"/>
  <rect width="1280" height="320" fill="url(#dots)"/>
  <circle cx="1230" cy="20" r="130" fill="#22D3EE" opacity="0.18"/>
  <circle cx="40" cy="320" r="110" fill="#FACC15" opacity="0.16"/>

  <!-- Text block (kiri) -->
  <g transform="translate(90 0)">
    <rect x="0" y="62" width="262" height="32" rx="16" fill="#FFFFFF" opacity="0.2"/>
    <text x="18" y="84" font-family="Helvetica, Arial, sans-serif" font-size="15" font-weight="700" letter-spacing="2" fill="#FFFFFF">PARKING MANAGEMENT</text>
    <text x="0" y="160" font-family="Helvetica, Arial, sans-serif" font-size="50" font-weight="800" fill="#FFFFFF">Manajemen Parkir</text>
    <text x="0" y="214" font-family="Helvetica, Arial, sans-serif" font-size="50" font-weight="800" fill="#FACC15">Gedung</text>
    <text x="0" y="256" font-family="Helvetica, Arial, sans-serif" font-size="20" fill="#FFFFFF" opacity="0.85">Kelola slot, kendaraan, dan kapasitas parkir</text>
  </g>

  <!-- Panel ilustrasi (kanan) -->
  <rect x="840" y="40" width="360" height="240" rx="28" fill="#0F172A" opacity="0.4"/>
  <g transform="translate(860 70)">
    <g stroke="#FFFFFF" stroke-opacity="0.5" stroke-width="4" stroke-linecap="round">
      <line x1="0" y1="0" x2="0" y2="180"/>
      <line x1="80" y1="0" x2="80" y2="180"/>
      <line x1="160" y1="0" x2="160" y2="180"/>
      <line x1="240" y1="0" x2="240" y2="180"/>
      <line x1="320" y1="0" x2="320" y2="180"/>
    </g>
    <!-- mobil 1 -->
    <rect x="15" y="40" width="50" height="100" rx="14" fill="#FACC15"/>
    <rect x="25" y="58" width="30" height="24" rx="6" fill="#0F172A" opacity="0.35"/>
    <!-- mobil 2 -->
    <rect x="95" y="40" width="50" height="100" rx="14" fill="#22D3EE"/>
    <rect x="105" y="58" width="30" height="24" rx="6" fill="#0F172A" opacity="0.35"/>
    <!-- slot kosong -->
    <rect x="175" y="40" width="50" height="100" rx="14" fill="none" stroke="#FFFFFF" stroke-opacity="0.7" stroke-width="3" stroke-dasharray="8 8"/>
    <circle cx="200" cy="90" r="14" fill="#22C55E"/>
    <path d="M193 90l5 5 9-10" fill="none" stroke="#FFFFFF" stroke-width="3.5" stroke-linecap="round" stroke-linejoin="round"/>
    <!-- mobil 3 -->
    <rect x="255" y="40" width="50" height="100" rx="14" fill="#FFFFFF"/>
    <rect x="265" y="58" width="30" height="24" rx="6" fill="#0F172A" opacity="0.3"/>
  </g>
<metadata><c2pa:manifest>AAAWgmp1bWIAAAAeanVtZGMycGEAEQAQgAAAqgA4m3EDYzJwYQAAABZcanVtYgAAAEdqdW1kYzJtYQARABCAAACqADibcQN1cm46YzJwYTo5MjM0NTQwYi1jMDE4LTQyOTEtYTNiNC0yNDViNzVkZWMzMjAAAAADl2p1bWIAAAApanVtZGMyYXMAEQAQgAAAqgA4m3EDYzJwYS5hc3NlcnRpb25zAAAAALxqdW1iAAAARGp1bWRjYm9yABEAEIAAAKoAOJtxE2MycGEuaW5ncmVkaWVudC52MwAAAAAYYzJzaBsoG0SrQZpF6B2B1Uk5PPkAAABwY2JvcqNpZGM6Zm9ybWF0bWltYWdlL3N2Zyt4bWxqaW5zdGFuY2VJRHgseG1wOmlpZDo0OGQ5YjhmOS1kMmFhLTRlNTktODk5OC04NjljZGQ4NzEzZGFscmVsYXRpb25zaGlwaHBhcmVudE9mAAAB4mp1bWIAAABBanVtZGNib3IAEQAQgAAAqgA4m3ETYzJwYS5hY3Rpb25zLnYyAAAAABhjMnNo9qWn6dWIZXuW++Cyb0p/1AAAAZljYm9yomdhY3Rpb25zgqJmYWN0aW9ua2MycGEub3BlbmVkanBhcmFtZXRlcnOha2luZ3JlZGllbnRzgaJjdXJseC1zZWxmI2p1bWJmPWMycGEuYXNzZXJ0aW9ucy9jMnBhLmluZ3JlZGllbnQudjNkaGFzaFggBxihnmGqPhMM4KZ/63LKN0jArmUIhjVrN+3gAdD8XtmkZmFjdGlvbngdY29tLmFudGhyb3BpYy5jbGF1ZGUucHJvdmlkZWRqcGFyYW1ldGVyc6F4H2NvbS5hbnRocm9waWMub3JpZ2luLWNvbmZpZGVuY2VndW5rbm93bmtkZXNjcmlwdGlvbnhmQ2xhdWRlIHByb3ZpZGVkIHRoaXMgZmlsZSBhdCB0aGUgcmVxdWVzdCBvZiBhIHVzZXIgYW5kIG1heSBoYXZlIGNyZWF0ZWQgb3IgbW9kaWZpZWQgdGhlIGZpbGUgY29udGVudHMubXNvZnR3YXJlQWdlbnShZG5hbWVmQ2xhdWRlcmFsbEFjdGlvbnNJbmNsdWRlZPUAAADIanVtYgAAAEBqdW1kY2JvcgARABCAAACqADibcRNjMnBhLmhhc2guZGF0YQAAAAAYYzJzaP61c7qRonlD2cxNq0ewqGsAAACAY2JvcqVjYWxnZnNoYTI1NmNwYWRMAAAAAAAAAAAAAAAAZGhhc2hYIB/ueWywwdnhRIWpxDCnhTk8iapGLZSA8xCUWaGEThAhZG5hbWVuanVtYmYgbWFuaWZlc3RqZXhjbHVzaW9uc4GiZXN0YXJ0GQzYZmxlbmd0aBkeBAAAAj5qdW1iAAAAJ2p1bWRjMmNsABEAEIAAAKoAOJtxA2MycGEuY2xhaW0udjIAAAACD2Nib3KlY2FsZ2ZzaGEyNTZpc2lnbmF0dXJleE1zZWxmI2p1bWJmPS9jMnBhL3VybjpjMnBhOjkyMzQ1NDBiLWMwMTgtNDI5MS1hM2I0LTI0NWI3NWRlYzMyMC9jMnBhLnNpZ25hdHVyZWppbnN0YW5jZUlEeCx4bXA6aWlkOmYyM2M4Nzg3LWYxN2EtNGFhNy1hMmRiLTQ3NTE3MmMxY2VjMHJjcmVhdGVkX2Fzc2VydGlvbnODomN1cmx4LXNlbGYjanVtYmY9YzJwYS5hc3NlcnRpb25zL2MycGEuaW5ncmVkaWVudC52M2RoYXNoWCAHGKGeYao+Ewzgpn/rcso3SMCuZQiGNWs37eAB0Pxe2aJjdXJseCpzZWxmI2p1bWJmPWMycGEuYXNzZXJ0aW9ucy9jMnBhLmFjdGlvbnMudjJkaGFzaFggBynBCFMoNnOGlxWGniKuoErdbXg9OCB7Ws7Ve/wKYymiY3VybHgpc2VsZiNqdW1iZj1jMnBhLmFzc2VydGlvbnMvYzJwYS5oYXNoLmRhdGFkaGFzaFgg76umORvj34wHyCTZ6xVY+WyhEg7wSVd/HoR7FcauH9t0Y2xhaW1fZ2VuZXJhdG9yX2luZm+jZG5hbWVvQW50aHJvcGljIEZpbGVzZ3ZlcnNpb25lMS4wLjBrc3BlY1ZlcnNpb25lMi40LjAAABA4anVtYgAAAChqdW1kYzJjcwARABCAAACqADibcQNjMnBhLnNpZ25hdHVyZQAAABAIY2JvctKEWQISogEmGCFZAgowggIGMIIBjaADAgECAhRA5aAK7sI50L64g/oGQgU9Z1UTADAKBggqhkjOPQQDAzBJMRcwFQYDVQQKEw5BbnRocm9waWMsIFBCQzEuMCwGA1UEAxMlQW50aHJvcGljIENvbnRlbnQgQ3JlZGVudGlhbHMgUm9vdCBDQTAeFw0yNjA4MDcxODQzNTZaFw0yODA4MDYxOTQzNTZaMEQxFzAVBgNVBAoTDkFudGhyb3BpYywgUEJDMSkwJwYDVQQDEyBBbnRocm9waWMgQ2xhdWRlIENvbnRlbnQgU2lnbmluZzBZMBMGByqGSM49AgEGCCqGSM49AwEHA0IABJh6CmvLUBgFFNU0vUKlOVtE6djd17L5SuwX0LemFisBM3dkd/3cyjxFA3Qo5S46fX0/ihY0VZ7mfb9KF703t5OjWDBWMA4GA1UdDwEB/wQEAwIHgDAVBgNVHSUEDjAMBgorBgEEAYPoXgIBMAwGA1UdEwEB/wQCMAAwHwYDVR0jBBgwFoAUzlHiBIFOZFsj+OPEz5o+nMHXXMIwCgYIKoZIzj0EAwMDZwAwZAIwMXMdFJ4BetLLVY7ORuE9noqbbAZOZn/aArXyTwFAZfKrPzxF2vPoJNf1+UCdg1XGAjBwX1zd9WGqYkqmL5SFqw1QySjr1zJfpJM9+1rdDwSPLMOPOjKuiXjoU/pUUeG9RwmhY3BhZFkNngAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAPZYQOmKyoai/v6FYAY0KNErH+sRpfBdRpmIry31Mdt3CeJL3qTLt9fj9s+FXBiid6UM7ObtIKeZHfjl5RW+0UQC/9E=</c2pa:manifest></metadata></svg>

## 📖 About The Project

**Manajemen Parkir Gedung** merupakan proyek Tugas Besar Struktur Data yang dikembangkan oleh kelompok **Bersiaplah IF-49-11**.

Aplikasi ini dirancang untuk mengelola area parkir, pencatatan kendaraan masuk dan keluar, serta pengelolaan tiket parkir menggunakan struktur data.

### 🎯 Project Objectives

- Mengelola beberapa area parkir dalam satu gedung.
- Mencatat kendaraan berdasarkan area parkir.
- Mengelola tiket untuk pencarian dan perhitungan tarif.
- Mengimplementasikan konsep Multi Linked List dan Binary Search Tree.

## 🧩 Data Structure

Project ini menggunakan dua struktur data utama:

### 1. Multi Linked List (MLL-00)

Menggunakan relasi **One-to-Many (1-N)**, di mana satu area parkir dapat memiliki banyak kendaraan.

| Parameter | Type | Description |
| :--- | :--- | :--- |
| `kodeArea` | `string` | **Primary Identifier**. Kode unik area parkir |
| `lantai` | `int` | Lokasi lantai area parkir |
| `jenisKendaraan` | `string` | Jenis kendaraan yang diperbolehkan |
| `kapasitasSlot` | `int` | Kapasitas maksimum kendaraan |
| `platNomor` | `string` | Identitas kendaraan |
| `jamMasuk` | `time` | Waktu kendaraan masuk |
| `nomorTiket` | `int` | Nomor tiket kendaraan |

### 2. Binary Search Tree (BST)

Digunakan untuk menyimpan dan mencari tiket parkir berdasarkan `nomorTiket` sebagai key.

| Parameter | Type | Description |
| :--- | :--- | :--- |
| `nomorTiket` | `int` | **BST Key**. Identitas unik tiket |
| `platNomor` | `string` | Plat nomor kendaraan |
| `kodeArea` | `string` | Area tempat kendaraan parkir |
| `jamMasuk` | `time` | Waktu kendaraan masuk |
| `jamKeluar` | `time` | Waktu kendaraan keluar |
| `tarif` | `double` | Total biaya parkir |

## ⚙️ Main Features

| Feature | Description |
| :--- | :--- |
| 🚗 Vehicle Entry | Mencatat kendaraan masuk dan memvalidasi area |
| 🚙 Vehicle Exit | Menghitung tarif dan menghapus kendaraan dari area |
| 🎟️ Ticket Management | Membuat dan menyimpan tiket parkir |
| 🔍 Ticket Search | Mencari tiket berdasarkan nomor tiket |
| 📊 Area Statistics | Menampilkan keterisian dan pendapatan area |

## 📈 Development Progress

| Component | Progress |
| :--- | :--- |
| Repository Setup | ✅ Available |
| Project Configuration | ✅ Available |
| Main Program | 🟡 Initial Skeleton |
| Header Organization | 🟡 Directory Available |
| Multi Linked List | ⏳ Not Yet Verified |
| Binary Search Tree | ⏳ Not Yet Verified |
| System Integration | ⏳ Not Yet Verified |

> Progress di atas mengacu pada file yang terlihat di branch `main`, bukan keseluruhan pekerjaan lokal setiap anggota tim.

## 🛠️ Tech Stack

| Technology | Purpose |
| :--- | :--- |
| C++ | Main Programming Language |
| GCC / Code::Blocks | Compilation & Development |
| Git | Version Control |
| GitHub | Repository & Collaboration |

## 🚀 Getting Started

Clone repository:

```bash
git clone https://github.com/rayhan0507/Manajemen-Parkir-Gedung.git
cd Manajemen-Parkir-Gedung
```

Compile menggunakan GCC:

```bash
g++ -std=c++17 main.cpp -o parkir
```

Run:

```bash
./parkir
```

## 📂 Project Structure

```text
Manajemen-Parkir-Gedung/
│
├── header/
├── Manajemen Parkir Gedung.xcodeproj/
├── .gitignore
├── Manajemen-Parkir-Gedung.cbp
├── main.cpp
└── README.md
```

## 👥 Authors

**Team Bersiaplah — IF-49-11**

- [ryxageneral](https://github.com/rayhan0507)
- [mulki](https://github.com/muhammadmulkir)
- [cici](https://github.com/andireskiramadhanii)


## 🔗 Links

[![GitHub](https://img.shields.io/badge/GitHub-Repository-181717?style=for-the-badge&logo=github)](https://github.com/rayhan0507/Manajemen-Parkir-Gedung)
[![Portfolio](https://img.shields.io/badge/Portfolio-000000?style=for-the-badge&logo=ko-fi&logoColor=white)](YOUR_PORTFOLIO_LINK)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](YOUR_LINKEDIN_LINK)
[![Instagram](https://img.shields.io/badge/Instagram-E4405F?style=for-the-badge&logo=instagram&logoColor=white)](YOUR_INSTAGRAM_LINK)

---

<div align="center">

**Made with ❤️ by Team Bersiaplah**

*Organize. Connect. Park.*

</div>
