# NOIR — Spade 65

* Keyboard Maintainer: [febriantosurya](https://github.com/febriantosurya)
* Hardware Supported: Spade 65 (WB32FQ95)

## Build & Flash

```bash
qmk compile -kb brian70/spade_65 -km default
```

```bash
qmk flash -kb brian70/spade_65 -km default
```


## Reset to Bootloader Mode

If you are already running this firmware, you can reset the board into bootloader mode by doing one of the following:

1. The best way to reset the board into bootloader mode is to use the following steps:
    - Unplug the keyboard from USB.
    - Press and hold the `escape` key.
    - Plug the keyboard back into USB.
    - The board will reset to bootloader mode.

1. Another way is to use the default keymap. Press the `Fn + R_Shift + Esc` key combination.
1. The worst case scenario when you brick the keyboard: open the case and jumper the BOOT pin on the MCU to 3.3V, then connect USB. You can reference to the [docs/flashing_spade65.md](docs/flashing_spade65.md) for more information.


> See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information.
