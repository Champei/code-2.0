# Blockchain

This section is mostly focused on learning, as many of you won't be familiar about blockchain is.

## Pre-requisites

## Blockchain Basics

Before actual development, you will be required to understand how bitcoin works.

- Best explanation of it is - [https://www.youtube.com/watch?v=bBC-nXj3Ng4](https://www.youtube.com/watch?v=bBC-nXj3Ng4)

You will also require some elementary knowledge blockchain fundamentals and ethereum.

- You can follow this playlist till Lecture 12 for blockchain fundamentals - [https://www.youtube.com/playlist?list=PLgPmWS2dQHW-BRQCQCNYgmHUfCN115pn0](https://www.youtube.com/playlist?list=PLgPmWS2dQHW-BRQCQCNYgmHUfCN115pn0)

- For ethereum, you can follow the first 18 videos of - [https://www.youtube.com/playlist?list=PLgPmWS2dQHW9FmqNqug3M5ooNuRqP-alu](https://www.youtube.com/playlist?list=PLgPmWS2dQHW9FmqNqug3M5ooNuRqP-alu)

---

- All thing of one place from basics of blockchain to full stack web3 development - [https://www.youtube.com/watch?v=gyMwXuJrbJQ](https://www.youtube.com/watch?v=gyMwXuJrbJQ)

## Development

Now, you can start learning solidity language used for writing smart contracts on the ethereum chain.

- Solidity full course - [https://www.youtube.com/playlist?list=PLgPmWS2dQHW9u6IXZq5t5GMQTpW7JL33i](https://www.youtube.com/playlist?list=PLgPmWS2dQHW9u6IXZq5t5GMQTpW7JL33i)

# Problem Statement 1 - Decentralised Lottery System (Easy)

Design a smart contract for a decentralized lottery application on the blockchain. Participants can participate in the lottery by paying a fixed fee within a specified timeframe. The smart contract employs cryptographic randomness to impartially select a winner, and the winnings are automatically transferred to the winner's address using the blockchain's transparent and trustless nature. The smart contract ensures that participants cannot enter the lottery more than once, preventing duplicity and ensuring fairness in the lottery process.

**Key Features:**

- Participants can join the lottery by sending the specified amount of ETH only.
- The lottery operates within specific start and end times, with a winner selected after this period.
- The winner is determined through a secure randomness method.
- Once the lottery concludes, all accumulated funds are promptly transferred to the winner's address, ensuring an instantaneous and transparent distribution of winnings.

**Note:** Write the code on Remix IDE in Solidity for the Ethereum blockchain.

---

# Problem Statement 2 - Decentralised Voting System (Easy)

Design a smart contract for a decentralized voting application on the blockchain. The system should allow a list of predefined candidates and enable registered voters to cast their vote only once. Votes must be recorded immutably on the blockchain, ensuring transparency and preventing vote tampering. The voting period will be open only for a specified time frame, after which voting is closed and the results can be tallied and declared automatically by the smart contract.

**Key Features:**

- Only registered voters can participate, and each voter can vote only once.
- Voting is only allowed within a specific start and end time.
- Votes are stored transparently and immutably on the blockchain.
- After voting ends, the smart contract automatically counts votes and declares the winner.
- The entire process is trustless and verifiable by anyone on the blockchain.

**Note:** Write the code on Remix IDE in Solidity for the Ethereum blockchain.

---

# Problem Statement 3 - Simple Escrow Contract (Intermediate)

Design a smart contract that acts as a simple escrow for a transaction between two parties, overseen by a neutral third party (an arbiter). The contract will hold funds from a depositor until the arbiter approves their release to a beneficiary. This is useful in situations where two parties don't fully trust each other. For example, someone paying for a service can deposit the funds into escrow, and the funds are only released to the service provider after an arbiter confirms the service has been completed satisfactorily.

**Key Features:**

- **Roles:** The contract is initialized with three addresses: the depositor (who will pay), the beneficiary (who will receive the funds), and the arbiter.
- **Deposit:** A function allows the depositor to send a specific amount of ETH into the contract. No one else should be able to deposit funds.
- **Approval**: The arbiter has the sole authority to approve the transaction. They will call a function to signal that the funds can be released.
- **Withdrawal:** Once the arbiter has approved the transaction, and only then, the beneficiary can call a function to withdraw all the funds from the contract.

**Note:** Write the code on Remix IDE in Solidity for the Ethereum blockchain.

---

Problem Statements By - Aayush Yadav
