# PS3 – Simple Escrow Contract (Intermediate)

Design a smart contract that acts as a simple escrow for a transaction between two parties, overseen by a neutral third party (an arbiter). The contract will hold funds from a depositor until the arbiter approves their release to a beneficiary. This is useful in situations where two parties don't fully trust each other. For example, someone paying for a service can deposit the funds into escrow, and the funds are only released to the service provider after an arbiter confirms the service has been completed satisfactorily.

**Key Features:**

- **Roles:** The contract is initialized with three addresses: the depositor (who will pay), the beneficiary (who will receive the funds), and the arbiter.
- **Deposit:** A function allows the depositor to send a specific amount of ETH into the contract. No one else should be able to deposit funds.
- **Approval**: The arbiter has the sole authority to approve the transaction. They will call a function to signal that the funds can be released.
- **Withdrawal:** Once the arbiter has approved the transaction, and only then, the beneficiary can call a function to withdraw all the funds from the contract.

**Use Case:** This escrow contract is useful in situations where trust between two parties is limited. For example, someone paying for a service can deposit the funds into the escrow contract, and the funds are only released to the service provider after the arbiter confirms satisfactory completion.

**Note:** Write the code on Remix IDE in Solidity for the Ethereum blockchain.
