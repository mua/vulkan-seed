# 🌋 Vulkan Seed 🌱

[![License][license-img]][license-url]
![Windows][windows-img]
![Linux][linux-img]
![Android][android-img]

A starter repo that you could use to build a Vulkan application on top of.

## Getting Started

Make sure to have the following installed:
- [Git](https://git-scm.com/)
- [Visual Studio 2017 with C++](https://www.visualstudio.com/thank-you-downloading-visual-studio/?sku=Community&rel=15)
- [Python 3.x](https://www.python.org/downloads/)
- [CMake](https://cmake.org)
- [Vulkan SDK](https://vulkan.lunarg.com/) 

Then on a command line tool like [Cmder](http://cmder.net) or [Hyper](https://hyper.is), go to a folder such as your Documents and enter:

```bash
# Clone Repo
git clone git@github.com:alaingalvan/vulkan-seed.git --recursive
cd vulkan-seed

# Build Solution
cmake .

# Compile Shaders
python data/shaders/compile.py
```

### File Structure

```bash
├─ external/              # Dependencies
│  └─ Vulkan-WSIWindow/
├─ data/                  # Static Files
│  └─ shaders
│     ├─ shader.frag
│     └─ shader.vert
├─ src/                   # Source Files
│  ├─ renderer.h
│  ├─ renderer.cpp
│  └─ main.cpp
├─ .gitignore
├─ CMakeLists.txt         # Build Script
├─ license.md
└─ readme.md
```

## Dependencies

- [CMake](https://cmake.org/) - Multi-platform solution generator.

- [Vulkan SDK](https://vulkan.lunarg.com/) - The official Vulkan SDK distributed by LunarG.

- [WSIWindow](https://github.com/renelindsay/Vulkan-WSIWindow) - Cross platform windowing abstraction for Vulkan supported operating systems developed by LunarG.

[license-img]: http://img.shields.io/:license-unlicense-blue.svg?style=flat-square
[license-url]: http://unlicense.org/
[windows-img]: http://img.shields.io/:supports-win-03b3fe.svg?style=flat-square
[android-img]: http://img.shields.io/:supports-android-a4ca39.svg?style=flat-square
[linux-img]: http://img.shields.io/:supports-linux-df491e.svg?style=flat-square