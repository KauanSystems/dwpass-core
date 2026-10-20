<br>

<p align="center">
  <img src="assets/logo/Logo.svg" width="300" alt="dwpass-core Logo">
</p>

<h1 align="center">
  dwpass-core - A Diceware Passphrase Generator Core.
</h1> <br>

<p align="center">
  A Modern Core Diceware Passphrase Generator. <br> Built with modern C++ for performance, simplicity, and reliability. <br><br>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-Standard-green?logo=c%2B%2B" alt="C++ Standard">
  <img src="https://img.shields.io/badge/License-GPLv3-green?logo=gnu" alt="License GPLv3">
  <img src="https://img.shields.io/badge/Linux-Supported-green?logo=linux" alt="Linux Supported">
  <img src="https://img.shields.io/badge/Windows-Supported-green?logo=windows" alt="Windows Supported">
  <img src="https://img.shields.io/badge/CMake-Build-green?logo=cmake" alt="CMake">
</p> <br>

<div align="center">

[Project Structure](#project-structure) ·

</div> <br>

A high-performance, security-focused command-line interface (Core) tool for generating passphrases using the Diceware method. The project combines the convenience of terminal-based automation with the rigor of physical entropy and the operating system's cryptographic sources.

<br>

> [!IMPORTANT]
> Please note: this repository is responsible for housing the program's core. It is intended to eventually serve as a foundation for separating the program into a version with a graphical user interface (GUI) and a version with a command-line interface (CLI).

<br>

## Project Structure:

```text
dwpass-core/                                                                                   
├── assets/                             # Project Assets File.
│   ├── logo/                           # Project Logo File.
│   │
│   └── wordlist/                       # Project Wordlist File. 
│       ├── EN/                         # English Language Wordlist.
│       └── PT-BR/                      # Brazilian Portuguese Language Wordlist.
│
├── core/                               # Program Core Logic File.
│   ├── include/                        # Program Core Includes Directory.
│   │   ├── command/                    # Command Logic Directory.
│   │   │
│   │   └── logic/                      # Program Logic Directory.
│   │
│   └── src/                            # Program Code Directory.
│       ├── command/                    # Program Command Code Directory.
│       │   ├── export/                 # Commmand Export Logic File. 
│       │   ├── help/                   # Commmand Help Logic File.
│       │   ├── logo/                   # Commmand Logo Logic File.
│       │   ├── system/                 # Commmand System Logic File.
│       │   └── version/                # Commmand Version Logic File.
│       │
│       └── logic/
│           ├── compare/                # Compare Logic File.
│           └── generator/              # Dice Generator Logic File.
|
├── LICENSE                             # Project License.
└── README.md                           # Project Technical Documentation.
```

<br><br>

## Supported Operating Systems

<br>

<div align="center">

| Operating System | Status |
| :---: | :---: |
| ![Windows](https://img.shields.io/badge/Windows-0078D4?style=flat&logo=windows&logoColor=white) | ![Supported](https://img.shields.io/badge/Supported-2ea44f?style=flat) |
| ![Linux](https://img.shields.io/badge/Linux-FCC624?style=flat&logo=linux&logoColor=black) | ![Supported](https://img.shields.io/badge/Supported-2ea44f?style=flat) |
| ![macOS](https://img.shields.io/badge/macOS-000000?style=flat&logo=apple&logoColor=white) | ![Not supported](https://img.shields.io/badge/Not%20Supported-red?style=flat) |
| ![FreeBSD](https://img.shields.io/badge/FreeBSD-AB2B28?style=flat&logo=freebsd&logoColor=white) | ![Not supported](https://img.shields.io/badge/Not%20Supported-red?style=flat) |

</div>

<br><br><br><br><br>

<p align="center">
  <img src="assets/logo/Logo.svg" width="200" alt="dwpass-core Logo">
</p>

<h1 align="center">Dwpass-core</h1> <br>

<p align="center">
  A Modern Core Diceware Passphrase Generator. <br> Built with modern C++ for performance, simplicity, and reliability. <br><br>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-Standard-green?logo=c%2B%2B" alt="C++ Standard">
  <img src="https://img.shields.io/badge/License-GPLv3-green?logo=gnu" alt="License GPLv3">
  <img src="https://img.shields.io/badge/Linux-Supported-green?logo=linux" alt="Linux Supported">
  <img src="https://img.shields.io/badge/Windows-Supported-green?logo=windows" alt="Windows Supported">
  <img src="https://img.shields.io/badge/CMake-Build-green?logo=cmake" alt="CMake">
</p> <br>

<div align="center">

[Project Structure](#project-structure) ·
[Requirements](#requirements) ·
[Build & Run](#build--run)

</div> <br><br>

<p align="center">
  Developed by KauanSysytems.
</p> <br>

<br><br><br><br><br>

