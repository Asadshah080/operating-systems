#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>

#include<netinet/in.h>

int main(){
	int network_socket;
	network_socket=socket(AF_INET,SOCK_STREAM,0);
	
	struct sockaddr_in server_address;
	server_address.sin_family=AF_INET;
	server_address.sin_port=htons(8080);
	server_address.sin_addr.s_addr=INADDR_ANY;

	int connection_status=connect(network_socket,(struct sockaddr*) &server_address,sizeof(server_address));
	
	if(connection_status==-1){
	printf("There was error in connection to socket \n\n");
	}

	char server_res[256];
	recv(network_socket,&server_res,sizeof(server_res),0);
	printf("server response %s\n",server_res);
	close(socket);

 return 0;
}
