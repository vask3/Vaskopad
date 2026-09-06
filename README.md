# Vaskopad
# 3-Key Macropad (Hackpad) 🚀

A compact, customizable 3-key mechanical macropad designed for the Hackpad hardware competition. Powered by a Seeeduino XIAO micro-controller.

## 📌 Features
* **Keys:** 3x Mechanical Switches (Cherry MX footprint).
* **Brain:** Seeeduino XIAO MCU.
* **Architecture:** Custom-designed PCB with an integrated 3D-printed enclosure.
* **Mounting Method:** PCB Support structure — the PCB sits securely at the bottom of the enclosure, with the switch top plate resting on an internal support ledge to prevent flex or collapsing.

---

## 🛠️ Repository Structure
* `/hardware` - KiCad PCB source files, schematic, and Gerber production files.
* `/cad` - 3D model files (`.stl`, `.step`, Tinkercad / OpenSCAD source) for the top plate and enclosure.
* `/firmware` - Code and keymap configuration files for the MCU.

---

## 🔧 Production & Assembly
1. **PCB:** Order using the Gerber files located in the `/hardware` folder (`.gbr`, `.drl`, `.csv`, `.pos`).
2. **3D Printing:** Print `case.stl` and `plate.stl` with 0.2mm layer height (PLA or PETG).
3. **Assembly:**
   * Snap the switches into the top 3D-printed plate.
   * Solder the switches onto the PCB underneath.
   * Place the entire assembled unit inside the bottom enclosure so it rests firmly on the internal ledge.

---

## 🤝 Credits & Acknowledgments
* Designed for the **Hackpad** hardware event.
* Special thanks to the mechanical keyboard and open-source CAD community for assistance in refining the enclosure geometry and support structures.
