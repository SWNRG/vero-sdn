# VERO-SDN Adapter
The VERO-SDN Adapter is responsible for communicating control messages between the VERO-SDN-Controller and the Border Router (BR). 
Physically it is located close to the latter and enables the former to be off-site. 
Depending on the data-plane environment (i.e., the Border Router type) we provide different adapters. 

**VERO-sdn-adapter-COOJA**: connects the VERO-SDN Controller with the COOJA simulator pty2serial interface. The runtime environment with a python script detects available PTY and assigns automatically for deployment simplicity.
**VERO-sdn-adapter-RM090**: for RM090 motes 
**VERO-sdn-adapter-ZOLERTIA**: for ZOLERTIA motes