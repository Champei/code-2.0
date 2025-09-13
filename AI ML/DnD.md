# 🎲 Problem Statement: AI Dungeon Master Chatbot for Dungeons & Dragons

## 🎯 Objective

Build an AI-powered **Dungeon Master (DM) agent** that runs a Dungeons & Dragons (D\&D 5e-inspired) campaign, handling story narration, dice rolls, combat, and player interactions. The DM dynamically generates scenarios, describes environments, enforces rules, and coordinates Non-Player Character (NPC) agents.

---

## ⚙️ Core Features

* **DM Agent (Mandatory):**

  * Generates environments, quests, encounters, and story progression.
  * Narrates outcomes of player actions.
  * Enforces core D\&D rules (combat, ability checks, saving throws).

* **Player Interaction:**

  * Human player(s) interact with the DM through text.
  * Players can perform actions like exploration, combat, roleplay.

* **NPC Agents:**

  * DM spawns NPC agents (goblins, merchants, allies).
  * NPCs maintain memory and personalities.
  * NPCs can converse naturally with the player under DM’s orchestration.

* **Dice & Rules Engine:**

  * Support for dice rolling (`d20`, `d6`, etc.).
  * Automatic modifiers for skill checks, combat rolls.
  * Turn-based combat loop.

---

## 💻 Tech Stack & Concepts

* **Programming:** Python
* **Libraries:** LangChain / LlamaIndex, sentence-transformers, OpenAI / HuggingFace models
* **Core Concepts:** Retrieval-Augmented Generation (for lore/rules), multi-agent orchestration, natural language interaction, rule-based game mechanics

---

## 🚀 Extensions

* **World-Building RAG:** Store official D\&D 5e SRD + lore for retrieval.
* **Character Sheets:** Let players create & track stats, inventory, abilities.
* **Interactive App:** Use Streamlit or Gradio for a campaign UI.
* **Multi-Player Mode:** Multiple humans playing together with the DM agent.

---

## 📚 Resources

* **D\&D 5e SRD (Open Game License):** [D\&D SRD PDF](https://media.wizards.com/2016/downloads/DND/SRD-OGL_V5.1.pdf)
* **Dice Roller Reference:** Python `random` or `dice` package
* **Multi-Agent Frameworks:** LangChain, LangGraph, CrewAI

# !Important

This is a rather tough project, but it can be extremely rewarding when done properly. Focus should be on implementing a fewer set of features with high stability rather than a high set of features with low reliability. If you do pick this project, don't be afraid to especially ask your seniors for help. 