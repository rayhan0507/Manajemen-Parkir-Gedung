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
<div align="center"> 
    <img src="assets/banner.svg" alt="manajemen parking gedung" width="100%">
</div>


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
