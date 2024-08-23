# Digital Wallet Management System

## Overview

The Digital Wallet Management System is a C++ application designed to manage user accounts and transactions within a digital wallet. The system supports adding funds, transferring money between users, and displaying user balances in a sorted order.

## Features

- **User Management**: Initialize user accounts with unique IDs and starting balances.
- **Transaction Processing**: Handle fund transfers between users and provide success or failure feedback.
- **Balance Display**: Sort and display user balances in ascending order.

## How It Works

### Input

1. **Number of Users (N)**: The first input specifies the number of users.
2. **User Data**: For each user, input their unique ID and initial balance.
3. **Number of Transactions (T)**: The second input specifies the number of transactions.
4. **Transaction Details**: For each transaction, input the ID of the sender, the ID of the receiver, and the amount to transfer.

### Output

- **Transaction Status**: After each transaction, output "Success" if the transfer was successful, or "Failure" if there was insufficient balance.
- **Sorted Balances**: After processing all transactions, output the user IDs and their remaining balances, sorted in ascending order of balances.
