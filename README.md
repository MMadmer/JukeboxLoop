# JukeboxLoop

A lightweight quality‑of‑life mod for **Deep Rock Galactic**.

> **Author:** Madmer  
> **Mod Name:** JukeboxLoop

## What it does
If you don't want to manually turn on the jukebox every time, then this mod is just what you need!  
The jukebox will turn on by itself at any distance. If the music ends, it will turn it on again.

Be careful, the mod simulates a full activation, so you can go bankrupt if you listen to music for too long :)

## Features
- Auto‑starts the Space Rig jukebox from **any distance**.
- Automatically restarts songs when they end.
- Simulates a **full, paid activation** (respecting in‑game economy).
- Quick settings menu: **press `J`** to open/close.

## Controls
- **J** — Toggle the mod’s settings menu (open/close).

## Installation
1. Make sure UE4SS (or the current mod loader you use for DRG) is installed and enabled.
2. Copy the `JukeboxLoop` folder into your DRG Mods directory, e.g.:  
   `…\Deep Rock Galactic\FSD\Binaries\Win64\Mods\JukeboxLoop`
3. Launch the game. If the mod loader shows logs, you should see `JukeboxLoop` listed as loaded.

> **Multiplayer note:** The mod simulates a real jukebox activation. In lobbies with others, your credits can be spent when the jukebox (re)starts if the server allows it.

## Configuration
- Open the in‑game menu with **`J`** and adjust options on the fly.

## Compatibility
- Designed for the Space Rig jukebox interaction. Other mods that replace jukebox behavior may conflict.

## Credits & Attribution
- **Mod:** JukeboxLoop by **Madmer**.
- **Project scaffold:** This repository was originally based on a generated template for DRG mods (FSD‑Template). The original template’s README credited the following tooling/authors: Archengius’ *UE4 Template Generator* and the UE4SS UHT Generator by CheatingMuppet & Archengius. If you reuse this repo as a starting point for your own mod, please keep those attributions intact where applicable and follow any licenses of the respective tools.
- **Thanks:** The DRG and modding communities for docs, hooks, and examples.

## Building from Source (optional)
- Open the project in your installed Unreal Engine toolchain and compile as you would a standard UE4/UE5 plugin/mod.
- If you regenerate project files, ensure your IDE solution picks up the same engine/toolchain versions used by your UE4SS/DRG setup.

## Changelog
- **v1.0.0** — Initial public release.
