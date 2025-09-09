# PS3 – Simple Escrow Contract (Intermediate)

Design a smart contract that acts as a simple escrow for a transaction between two parties, overseen by a neutral third party (arbiter). Funds are held until the arbiter approves their release.

**Key Features:**

- **Roles:** Depositor (pays), Beneficiary (receives), Arbiter (approves).
- **Deposit:** Only the depositor can send funds to the contract.
- **Approval:** Only the arbiter can approve release of funds.
- **Withdrawal:** Once approved, the beneficiary can withdraw all funds.

**Use Case:** Useful when two parties do not fully trust each other. E.g., paying for a service where the funds are released only after arbiter confirmation.

**Note:** Write the code on Remix IDE in Solidity for the Ethereum blockchain.
