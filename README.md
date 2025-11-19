# Bleak Falls Barrow — Text-Based C++ RPG

A single-file, console-based adventure inspired by Skyrim's dungeon crawling and
turn-based combat. The project is implemented in C++ (C++17) and demonstrates
object-oriented design, polymorphism, RNG-based combat, inventory/loot systems,
and a small lockpicking minigame.

This repository contains the full source in a Visual Studio solution and a
single large C++ source file in the Final Project folder.

---

## Table of contents

- About
- Features
- Quick start (build & run)
- Controls / Gameplay
- High-level architecture & important classes
- Dungeon layout & encounters
- Files in this repository
- Notes, known issues, and roadmap
- Author

---

## About

You control "The Traveler", a lone adventurer exploring the depths of Bleak Falls
Barrow. The dungeon contains a series of 10 rooms (and sub-rooms) with combat
encounters, loot, and a final boss: the Draugr Scourge Lord.

The game is fully turn-based. Battles mix physical attacks, spells, item use,
and status effects. Enemies and the player act in order depending on stamina,
and combat encounters are generated dynamically.

---

## Features

- Turn-based combat with action menu:
  - Attack
  - Cast Spell
  - Use Bag (items)
  - Inspect (enemy / self)
  - Rest
- Magic system with multiple spell types and status effects:
  - Firebolt — HP damage + Ignite
  - Ice Spike — HP + Stamina damage + Frostbite
  - Lightning Bolt — HP + Magicka damage + Shock
  - Healing — restore HP
- Loot and inventory (gold, lockpicks, potions)
- Lockpicking minigame (3-turn left/right puzzle)
- Dynamic enemy generation and sorting by stamina for turn order
- 10-room dungeon, culminating in a boss encounter

---

## Quick start — Build & Run

This project is a single-file C++ program located at "Final Project/Final Project.cpp". It is written for C++17. Below are simple build-and-run instructions for Windows, macOS, and Linux using common toolchains. Adjust commands for your environment and compiler install locations.

Windows

- Visual Studio (recommended):
  1. Open Final Project/Final Project.sln in Visual Studio.
  2. Select the desired configuration (Release or Debug) and platform (x64).
  3. Build the solution (Build > Build Solution or Ctrl+Shift+B).
  4. Run from the IDE (Debug > Start Debugging or F5) or run the generated executable from the project's output folder (e.g., "Debug\Final Project.exe" or "x64\Release\Final Project.exe").

- MinGW / MinGW-w64 (g++):
  1. Install MingW-w64 and add it to your PATH (or use MSYS2).
  2. From a Command Prompt or MSYS2 shell, run:
     g++ -std=c++17 -O2 -o bleakfalls.exe "Final Project/Final Project.cpp"
  3. Run:
     .\bleakfalls.exe

macOS

- clang++ (default macOS toolchain):
  1. Open Terminal and run:
     clang++ -std=c++17 -O2 -o bleakfalls "Final Project/Final Project.cpp"
  2. Run:
     ./bleakfalls

- g++ (Homebrew gcc) — optional if you prefer GNU g++:
  1. Install GCC via Homebrew: brew install gcc
  2. Use the brewed g++ (replace X with the major version, e.g., g++-12):
     g++-X -std=c++17 -O2 -o bleakfalls "Final Project/Final Project.cpp"
  3. Run:
     ./bleakfalls

Linux

- GNU g++ (common on Linux):
  1. Install build-essential (Debian/Ubuntu) or equivalent for your distro.
  2. From the repository root run:
     g++ -std=c++17 -O2 -o bleakfalls "Final Project/Final Project.cpp"
  3. Run:
     ./bleakfalls

Notes and tips

- If compilation fails due to missing features, ensure your compiler supports C++17 and use a recent toolchain.
- The program uses console I/O. On Windows, you may need to adjust the terminal's font and window size for best display.
- If you prefer an easier cross-platform workflow, consider adding a small Makefile or CMakeLists.txt (I can add one if you'd like).

---

## Controls / Gameplay

In menus and combat, select options by entering the number corresponding to the
action:

- 1 — Attack
- 2 — Cast Spell
- 3 — Bag (open inventory / use potion)
- 4 — Inspect (see stats)
- 5 — Rest (recover a small amount, skip action)

Combat proceeds in rounds. At the start of each round, the characters (player
and enemies) are ordered by stamina; higher stamina acts earlier. Many actions
have stamina or magicka costs and may cause status effects that persist across
rounds.

---

## High-level architecture & important classes

The game code is implemented as several classes (all defined and used within
the main source file). Key classes and responsibilities:

- Weapon — weapon statistics, crit chance, stamina cost for attacks
- Magic — spells, damage values, and status effects (ignite, frostbite, shock)
- Loot — gold, lockpicks, potions; includes merging logic after encounters
- Enemy — base class for all enemies (HP, stamina, actions)
  - Bandit / Bandit Outlaw — human enemies with melee behavior
  - Skeever — small critters / weak enemies
  - Wounded Frostbite Spider — single spider encounter with frost mechanics
  - Draugr / Restless Draugr — undead enemies with different stats
  - ScourgeLord — final boss (high HP & stamina)
- Chest — implements the lockpicking puzzle logic and rewards
- Player — player stats, inventory, actions, spells, and leveling-up (if present)
- Room — handles a single room's encounter loop, enemy sorting, and rewards
- CreateRooms (or equivalent setup code) — builds all rooms and their encounters

Because the entire project is contained in a single large source file, these
components are implemented as classes/structs within that file and interact
through standard method calls.

---

## Dungeon layout & encounters

A representative dungeon progression used by the game:

- Entrance — 3 Bandits
- Room 1 — 2 Bandits
- Room 2.1 — 1 Bandit
- Room 2.2 — 3 Skeevers
- Room 3 — Wounded Frostbite Spider
- Room 4 — 3 Draugr
- Room 5 — 2 Draugr
- Room 8 — 1 Restless Draugr
- Room 9.1 — 3 Draugr
- Room 9.2 — 1 Draugr + 1 Restless Draugr
- Room 10 — Draugr Scourge Lord (final boss)

Each room contains logic to resolve the encounter, give rewards (loot, gold,
potions, lockpicks), and prompt the player to continue.

---

## Files in this repository

- Final Project/
  - Final Project.cpp — main source file containing the full game logic (single-file, ~65KB)
  - Final Project.sln — Visual Studio solution
  - Final Project.vcxproj* — Visual Studio project files
  - .gitignore — development ignores

(If you move code into separate compilation units in the future, consider splitting
classes into header/source pairs for maintainability.)

---

## Notes, known issues, and suggestions

- Single-file design: the project is implemented in one large C++ file for
  simplicity/demonstration. Refactoring into multiple headers and implementation
  files would improve readability and maintainability.
- No persistent save/load. Progress is lost on exit.
- Input validation: numeric menu input should be robust to unexpected values;
  the game contains basic validation, but additional sanitization could help.
- Cross-platform terminal differences: output formatting and clear-screen
  behavior may differ across terminals and Windows console.
- Consider adding unit tests, difficulty modes, an armor system, and more spells
  as future improvements.

---

## Author

Miguel Silva Torres  
Studio Infinite Loom — Lead Developer  
Computer Science Undergraduate

---

If you'd like, I can:
- produce a cleaned/refactored file layout (separate headers/sources),
- add a CONTRIBUTING.md and simple Makefile/CMake file for cross-platform builds,
- or open a branch with an updated README committed for you to review.