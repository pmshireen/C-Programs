import java.io.*;
import java.util.*;
import java.net.*;
public class ArpServer{
    public static void main() {
        try{
            DatagramPacket server = DatagramPacket(1309);
            while(true){
               
               byte[] sendbyte = new byte[1024];
                byte[] receivebyte = new byte[1024];
                DatagramPacket receiver = new DatagramPacket(receiver,receiver.length);
                String ip = new Strint(receiver.getBytes);  
                 InetAddress  addr = new receiver.getAddress();
                 File fp = new Filereader();

                while(line=br.readLine()!=null)
                {
                    if(line.contains(s))
                    {
                        System.out.println("ADDRESS FOUND\n");

                    }
                    else
                    {
                         System.out.println("ADDRESS NOT FOUND\n");
                    }

                }   

            }
            catch(IOException e)
            {
                System.out.println(e);
            }
        }
    }
}