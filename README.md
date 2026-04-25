# NOIR - Spade 65 — QMK Firmware

Custom QMK firmware for the Spade 65 wireless keyboard.

**MCU:** WB32FQ95 | **Bootloader:** wb32-dfu | **Connectivity:** USB / Bluetooth / 2.4GHz


## Prerequisites

Install QMK CLI and set up the build environment:

```bash
pip install qmk
qmk setup
```

## Build

```bash
qmk compile -kb brian70/spade_65 -km default
```

Output: `.build/brian70_spade_65_default.bin`

## Flash

1. **Enter Bootloader Mode**:
    - **Method 1**: Hold the **Escape** key while plugging in the USB cable.
    - **Method 2**: Use the key combination `Fn + R_Shift + Esc` (if already running QMK).
2. **Run Flash Command**:

```bash
sudo wb32-dfu-updater_cli -s 0x08000000 -D .build/brian70_spade_65_default.bin
```

Alternatively, `qmk flash -kb brian70/spade_65 -km default` may work if `wb32-dfu-updater_cli` is in PATH (untested).

For more detailed information on bootloaders and troubleshooting, see [docs/flashing_spade65.md](keyboards/brian70/spade_65/docs/flashing_spade65.md).

> [!TIP]
> **Troubleshooting**: If the board is "bricked" and none of the above methods work, you can force bootloader mode by opening the case and jumpering the **BOOT** pin on the MCU to **3.3V** while connecting USB.

## VIA

Load `via.json` in VIA to enable keymap editing without reflashing. You can find the `via.json` file in the [keyboards/brian70/spade_65](keyboards/brian70/spade_65) directory.

VID: `0x342D` | PID: `0xE49F`

## Features

| Feature | Details |
|---|---|
| Wireless | Bluetooth (3 devices) + 2.4GHz + USB |
| RGB | RGB Matrix (per-key) |
| Encoder | 1x rotary encoder |
| Layers | 9 layers + different RGB backlighting color for each layer |
| NKRO | Enabled |
| Debounce | 5ms |

## Layer Overview

| Layer | Name | Description |
|---|---|---|
| 0 | `_BL` | Base layer |
| 1 | `_FL` | Function layer (RGB, wireless mode switch) |
| 2 | `_MBL` | Mouse base layer |
| 3 | `_MFL` | Mouse function layer |
| 4 | `_FBL` | FN base layer |
| 5 | `_FFL` | FN function layer |
| 6 | `_FMBL` | FN mouse base layer |
| 7 | `_FMFL` | FN mouse function layer |
| 8 | `_DEFA` | Default / reset layer |

## Wireless Mode Switch

Use keys on `_FL` layer:

- `KC_BT1` / `KC_BT2` / `KC_BT3` — Bluetooth device 1/2/3
- `KC_2G4` — 2.4GHz dongle
- `KC_USB` — Wired USB

## License

GPL-2.0-or-later. See individual source files for copyright notices.

---

Customized by [febriantosurya](https://github.com/febriantosurya)
