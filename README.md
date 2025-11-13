# Bleak Falls Barrow -- Text-Based C++ RPG

A console-based adventure inspired by Skyrim's dungeon crawling and
turn-based combat.\
Built entirely in C++ using OOP, polymorphism, RNG-based combat, and
dynamic enemy generation.

------------------------------------------------------------------------

## 🎮 Overview

You play as **The Traveler**, exploring the depths of *Bleak Falls
Barrow*. Inside the ruins, you'll fight bandits, draugr, restless
draugr, and finally a powerful **Draugr Scourge Lord**.

Your journey includes: - Combat - Potions - Magic - Inventory
management - Lockpicking puzzle - 10-room dungeon progression

------------------------------------------------------------------------

## 🛠 Core Systems

### ⚔️ Turn-Based Combat

Player actions include: 
- Attack\
- Cast Spell\
- Use Bag\
- Inspect\
- Rest

Enemies act in stamina-sorted order each round.

------------------------------------------------------------------------

### 🪄 Magic System

Spells: - Firebolt -- HP damage + Ignite\
- Ice Spike -- HP + Stamina damage + Frostbite\
- Lightning Bolt -- HP + Magicka damage + Shock\
- Healing -- Restore 50 HP

------------------------------------------------------------------------

### 🧪 Loot & Inventory

Loot contains: - Gold\
- Lockpicks\
- Health / Magicka / Stamina potions

------------------------------------------------------------------------

### 🔐 Lockpicking Minigame

A 3-turn Left/Right puzzle with randomized sequences.\
Failing consumes a lockpick.

------------------------------------------------------------------------

## 🐺 Enemy Types

-   Bandit\
-   Bandit Outlaw\
-   Skeever\
-   Wounded Frostbite Spider\
-   Draugr\
-   Restless Draugr\
-   **Draugr Scourge Lord** -- Final boss (880 HP, 595 stamina)

------------------------------------------------------------------------

## 🧱 Class Architecture

  Class               Purpose
  ------------------- ------------------------------------
  Weapon              Weapon stats + crit + stamina cost
  Magic               Spell damage + status effects
  Loot                Gold, lockpicks, potions, merging
  Enemy               Base class for all enemies
  Bandit / Outlaw     Human enemies
  Draugr / Restless   Undead
  ScourgeLord         Boss enemy
  Chest               Lockpicking puzzle
  Player              Actions + stats + inventory
  Room                Turn loop, enemy sorting, rewards
  CreateRooms         Builds all 10 rooms

------------------------------------------------------------------------

## 🗺 Dungeon Layout

  Room       Encounter
  ---------- --------------------------
  Entrance   3 Bandits
  Room 1     2 Bandits
  Room 2.1   1 Bandit
  Room 2.2   3 Skeevers
  Room 3     Wounded Frostbite Spider
  Room 4     3 Draugr
  Room 5     2 Draugr
  Room 8     1 Restless Draugr
  Room 9.1   3 Draugr
  Room 9.2   1 Draugr + 1 Restless
  Room 10    Draugr Scourge Lord

------------------------------------------------------------------------

## ⚙️ Build Instructions

``` bash
g++ -std=c++17 -o bleakfalls "Final Project.cpp"
./bleakfalls
```

------------------------------------------------------------------------

## 🎮 Controls

    1 - Attack
    2 - Cast Spell
    3 - Bag
    4 - Inspect
    5 - Rest

------------------------------------------------------------------------

## 📁 File Structure

    /BleakFallsBarrow
     ├── Final Project.cpp
     ├── README.md

------------------------------------------------------------------------

## 🧭 Roadmap

-   Additional puzzles\
-   More spells\
-   Armor system\
-   Save/load\
-   Difficulty modes

------------------------------------------------------------------------

## 👤 Author

**Miguel Silva Torres**\
Studio Infinite Loom • Lead Developer\
Computer Science Undergraduate
