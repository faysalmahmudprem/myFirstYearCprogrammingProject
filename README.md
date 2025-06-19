 📖 Overview

**NOBANNO** is a console-based content streaming platform developed entirely in C during my **first year of university**. I was new to programming and had no idea how software or applications worked—I just knew some basic C syntax and wanted to build something cool.

At the time, I didn't even know if C could actually play videos. Still, I went ahead and simulated the features of a streaming service through text-based menus and imagination. This project is a reflection of passion, curiosity, and self-learning.

🛑 **Note:** This project is built specifically for **Windows OS only**. It relies on Windows-specific libraries like `windows.h`, `conio.h`, and `dos.h`, which are not compatible with Linux or macOS.

---

## ✨ Features

- 👤 **User System**
  - Register & log in
  - View and manage content access

- 🎞️ **Content Categories**
  - Movies (Bengali, English, Hindi, Tamil, Korean, etc.)
  - Web Series
  - Books
  - Games

- 💳 **Payment System (demo)**
  - Mobile Banking (Bkash, Rocket, Nagad)
  - Bank Accounts (Bank Asia, Islami Bank, Dutch Bangla)

- 💡 **Admin Panel**
  - Add, View, or Delete content
  - View user details

- 📥 **Download / Stream Simulation**
  - Console-based progress bars and feedback

- 📦 **Subscription Plans**
  - Basic, Standard, Advanced (with fictional features)

---

## 🧠 What I Learned

- How to use **file handling** in C
- Defining and using **structures**
- Writing and calling **functions**
- Creating interactive **console-based UIs**
- Simulating real-world systems with code logic

---

## 🛠️ How to Run

This project is written in **C** and tested on **Windows** using Turbo C / Code::Blocks / Dev-C++ (DOS-based environment).

### ✅ Prerequisites

- A C compiler like `gcc`, Turbo C++, or Code::Blocks
- Windows OS (or DOSBox if using legacy Turbo C)
- Console support (Command Prompt or terminal that supports `getch()`)

### ▶️ To Compile and Run:

```bash
gcc "Final Project.c" -o nobanno.exe
./nobanno.exe
