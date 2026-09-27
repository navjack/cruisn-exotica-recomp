# Cruis'n Exotica recomp

Title repository for the native Apple Silicon macOS port of *Cruis'n Exotica*
(N64, US). It builds inside the
[cruisn-recomp](https://github.com/navjack/cruisn-recomp) workspace, which
clones it into `games/cruisn-exotica`. **No game data is included; you need
your own ROM.**

**Status: boots, loads its gameplay code, and plays audio. Not yet played
through.**

## Contents

- `input/cruisn-exotica.syms.toml` — the CPU symbol map: entry, main, and the
  fixed overlay the game reads from ROM `0x5C4F0-0x756E0` to `0x8032C000`.
- `config/recomp-symbols.toml` — N64Recomp configuration: exception and TLB
  stubs.
- `rsp/n_aspMain.us.toml` — the `n_aspMain` audio microcode at ROM `0x4D670`
  (identical to Super Smash Bros.), recompiled with RSPRecomp at build time.
  Graphics use F3DEX2 fifo 2.08, which the workspace's RT64 patch maps to
  F3DEX2.
- `roms.toml`, `splat.yaml` — the supported dump's SHA-256 and the ROM
  segmentation.

Saves are EEPROM 4K.

## Build

From the workspace root, with `roms/Cruis'n Exotica (U) [!].z64` in place:

```sh
./scripts/build_game_app.sh cruisn-exotica
```

This produces `Cruis'n Exotica.app` in the workspace root.

## License

GPL-3.0 (see [`LICENSE`](LICENSE)), matching the
[cruisn-recomp](https://github.com/navjack/cruisn-recomp) workspace and the
N64ModernRuntime it links. The game belongs to its rights holders; no game
data is included.
