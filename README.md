Weeks 5-6: Network Configuration with Limited Bandwidth 
Problem: Communication between different sectors of the colony is disrupted due to a bandwidth limitation. Teams must optimize their network setup to ensure reliable and efficient communication with minimal bandwidth.
Task: Use socket programming in C to develop a client-server application that optimizes data transmission.
Constraints: Limited packet sizes (150 bytes); Teams must use UDP; Implement efficient data transmission protocols to keep track of lost packets and retransmit.
Outcome: Teams learn to create data transmission methods under resource constraints, crucial for maintaining communication quality.

Rubric:
1. **Using UDP (10 points)**: Both client and server correctly implement UDP (SOCK_DGRAM).
2. **Fragmenting on the Client (10 points)**: Client properly splits messages longer than 150 bytes into 150-byte packets.
3. **Reassembling on the Server (10 points)**: Server accurately reassembles fragmented packets received from the client.
4. **Oversized Packets (10 points)**: Oversized packets are correctly handled, either rejected or not sent by the client.
5. **Handling Very Large Message (10 points)**: Very large messages are handled properly, fragmented, transmitted, and reassembled without issues.
6. **Handling Empty Message (10 points)**: Empty messages are handled gracefully without causing errors in transmission.
7. **Partial Packet Handling (10 points)**: The final partial packet (less than 150 bytes) is handled correctly by both client and server.
8. **Server Binding (10 points)**: Server successfully binds to the specified address and port.
9. **Server Accept (10 points)**: Server correctly accepts and handles incoming connections from the client.
10. **General code formatting and logging (10 points)**
