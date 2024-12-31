𝑴𝒊𝒏𝒊𝒕𝒂𝒍𝒌

    A simple communication program using UNIX signals.

_________________________________________________________________

Description

The minitalk project is part of the 42 School curriculum. The goal is to create a client-server communication system using UNIX signals (SIGUSR1 and SIGUSR2). This project helps to understand interprocess communication (IPC) and signal handling in a Linux environment.

The client sends a string to the server, and the server receives and displays the string.

Features

	•	Communication between a client and a server using SIGUSR1 and SIGUSR2.
	•	Sends messages character by character in binary format.
	•	Handles variable-length strings efficiently.
	•	Robust signal handling to ensure message integrity.
