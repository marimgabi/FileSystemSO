# SHINee File System

A lightweight, custom-designed file system built in **C++** for educational purposes.  
The SHINee File System uses **contiguous allocation** and a **bitmap** to manage free blocks, simulating fundamental concepts of operating system storage management.

---

## 📦 Structure Overview

SHINee divides the file system into **four main components**:

1. **Boot Record**  
   Contains system metadata such as:
   - Bytes per sector
   - Number of sectors per cluster
   - Root directory size
   - Total sectors in volume
   - Bitmap size
   - Format success flag

2. **Bitmap**  
   Tracks used and free clusters.  
   Each bit represents a cluster: `0` for free, `1` for occupied.

3. **Root Directory**  
   Fixed number of entries (default: 32), each 32 bytes.  
   Follows the **Standard 8.3 format** (FAT-like).

4. **Data Area**  
   Stores actual file content and subdirectories.  
   File location and size are directly mapped using contiguous cluster allocation.

---

## 🗂️ File and Directory Management

- **Contiguous Allocation**: Each file occupies a continuous range of clusters.
- **Simple Traversal**: File reading is done using the initial cluster and file size.
- **Subdirectories**: Represented as clusters containing 8.3 entries.
- **Limitations**: Due to the lack of fragmentation, each root subdirectory can store up to 16 files or directories.

---

## 🚀 How to Compile

Make sure your system has a C++ compiler with **C++11** support.

```bash
# Compile
g++ -std=c++11 -o shinee main.cpp

