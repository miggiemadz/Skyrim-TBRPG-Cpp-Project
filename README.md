# Bleak Falls Barrow (Text-Based RPG)

A C++ console RPG prototype inspired by **Skyrim's dungeon encounters**,
where the player explores a series of rooms, battles enemies, and
manages health, stamina, and magicka. The game emphasizes combat
mechanics, turn-based decision-making, and class-based enemies with
unique attributes and loot systems.

------------------------------------------------------------------------

## 🎮 Overview

**Bleak Falls Barrow** is a single-player, terminal-based adventure
where the player, known as the **Traveler**, ventures through a Nordic
ruin filled with **bandits**, **draugr**, and **creatures**. Each
encounter happens inside a "Room" that features multiple enemies and a
basic battle loop with player actions and randomized enemy behavior.

------------------------------------------------------------------------

## 🧱 Core Features

### ⚔️ Combat System

-   Turn-based battle loop with player and enemy turns.
-   Actions include:
    -   **Attack**: Physical damage with stamina cost and critical
        chance.
    -   **Cast Spell**: Damage or heal using magicka.
    -   **Inspect**: View player or enemy stats.
    -   **Rest**: Recover stamina and magicka.

### 🪄 Magic System

-   Four core spells:
    -   **Firebolt** -- Health damage + Ignite.
    -   **Ice Spike** -- Health + Stamina damage + Frostbite.
    -   **Lightning Bolt** -- Health + Magicka damage + Shock.
    -   **Healing** -- Restores player health.
-   Each spell applies a unique **status effect** with turn-based
    penalties.

### 🛡️ Weapons & Loot

-   19 weapon types across **Ancient Nord**, **Iron**, and **Steel**
    tiers.
-   Each weapon has:
    -   Damage
    -   Critical Damage Boost
    -   Stamina Cost
-   Randomized loot (weapons, gold, and lockpicks).

### 👹 Enemy Types

-   **Bandit** (basic melee/mage)
-   **Bandit Outlaw** (advanced tier)
-   **Draugr**, **Restless Draugr**, **Draugr Overlord**
-   **Wounded Frostbite Spider**, **Skeever**
-   Each with unique stats, weapon loadouts, and AI behavior.

------------------------------------------------------------------------

## 🧩 Class Structure

  -----------------------------------------------------------------------
  Class                   Responsibility
  ----------------------- -----------------------------------------------
  `Weapon`                Defines weapon types, stats, and stamina costs

  `Magic`                 Handles spell logic, effects, and status
                          conditions

  `Armor`                 Placeholder for future armor system

  `Loot`                  Contains collectible items and gold

  `Enemy`                 Base class for all enemies; includes combat
                          logic

  `Bandit`, `Draugr`,     Specialized enemy subclasses with randomized
  etc.                    loadouts

  `Player`                Represents the user character and available
                          actions

  `Room`                  Manages combat encounters, battle flow, and
                          turn order
  -----------------------------------------------------------------------

------------------------------------------------------------------------

## 🧠 Systems Breakdown

-   **Turn Order Sorting:** Enemies are sorted by total stamina,
    determining battle order.
-   **Critical Hits:** Randomized on each attack (`1/10` chance).
-   **Status Effects:** Damage over time or stat debuffs per round.
-   **Resource Management:** Stamina limits attacks, Magicka limits
    spells.

------------------------------------------------------------------------

## ⚙️ How to Run

### Prerequisites

-   C++17 or newer
-   A terminal or IDE capable of running console input/output (e.g.,
    Visual Studio, VS Code, CLion)

### Build & Run

``` bash
g++ -std=c++17 -o bleakfalls bleakfalls.cpp
./bleakfalls
```

### Controls

Use numeric input to select actions during your turn:

    1 - Attack
    2 - Cast Spell
    3 - Bag (placeholder)
    4 - Inspect
    5 - Rest

------------------------------------------------------------------------

## 🧭 Roadmap

-   [ ] Add save/load system\
-   [ ] Implement puzzles in rooms\
-   [ ] Expand armor system\
-   [ ] Add boss encounter (e.g., Dragon Priest)\
-   [ ] Introduce experience and level progression\
-   [ ] Improve combat UI and narration pacing

------------------------------------------------------------------------

## 📁 File Structure

    /project-root
     ├── bleakfalls.cpp          # Main source file (combat, rooms, player)
     ├── README.md               # Project documentation
     ├── /build                  # (optional) compiled binaries
     ├── /assets                 # (future) text, art, audio assets

------------------------------------------------------------------------

## 👤 Author

**Miguel Silva Torres (Miggie)**\
Computer Science Undergraduate, Union College of Union County, NJ\
Indie Developer at *Studio Infinite Loom*

------------------------------------------------------------------------

## 📝 License

This project is for educational and portfolio purposes.\
© 2025 Miguel Silva Torres. All rights reserved.
