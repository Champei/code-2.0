# PS1 – Turing Robot (Easy)

Create a game that visually replicates the working of a **Turing Machine**.

**Objectives:**

- Player is given a finite segment of an infinite tape and a robot at a starting position.
- They must analyze the tape and design an algorithm to solve it and unlock the next level.
- Provide a **drag-and-drop interface** from a fixed/minimal set of moves to build algorithms.
- The game should reflect the working of a Turing Machine while being fun to play.

## EXAMPLE PUZZLE
**Initial:** 110010101001 </br>
**Goal:** all zeros to the left, all ones to the right: 000000111111

**Allowed commands:**
- MOV L / MOV R — move pointer left/right one cell.
- READ — reads symbol under pointer into register r.
- WRITE x — writes symbol x under pointer (x is 0 or 1).
- SWAP R — swap value at pointer with value at pointer+1 (pointer must not be at end).
