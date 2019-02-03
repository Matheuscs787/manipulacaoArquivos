package agenda;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;
import java.io.FileReader;

public class Agenda extends Contato{          
    
    public static void mostrar(){
        File dir = new File("/Users/Matheus/Desktop");
        File arq = new File(dir, "tarefa.txt");
        try {
        //Indicamos o arquivo que será lido
        FileReader fileReader = new FileReader(arq);

        //Criamos o objeto bufferReader que nos
        // oferece o método de leitura readLine()
        BufferedReader bufferedReader = new BufferedReader(fileReader);

        //String que irá receber cada linha do arquivo
        String linha = "";

        //Fazemos um loop linha a linha no arquivo,
        // enquanto ele seja diferente de null.
        //O método readLine() devolve a linha na
        // posicao do loop para a variavel linha.
        while ( ( linha = bufferedReader.readLine() ) != null) {
        //Aqui imprimimos a linha
        System.out.println(linha);
    }
		//liberamos o fluxo dos objetos ou fechamos o arquivo
        fileReader.close();
        bufferedReader.close();
	} catch (IOException e) {
    	e.printStackTrace();
    }
}
    
    public static void main(String[] args) {

           Contato c1 = new Contato();
           c1.setEndereco(endereco);
           c1.setNome(nome);
           c1.setTelefone(telefone);
        
           Scanner scanner = new Scanner(System.in);
           int menu = 0;
           
           
          while(menu !=6 ){
              System.out.println("_______________AGENDA_______________");
              System.out.println("Digite 1 para cadastrar um novo contato ");
              System.out.println("Digite 2 para mostrar os contatos ");
               System.out.println("Digite 3 para pesquisar um contato");
               System.out.println("Digite 4 para excluir um contato ");
               System.out.println("Digite 5 para modificar um contato");
               System.out.println("Digite 6 para sair da agenda");
               System.out.println("Digite o que deseja fazer:  ");
               menu = scanner.nextInt();
               
               switch(menu){
                    
                    case (1):
                     System.out.println("Insira o nome: " );
                     nome = scanner.next();
                     System.out.println("Insira o endereco: " );
                     endereco = scanner.next();
                     System.out.println("Insira o telefone: " );
                     telefone = scanner.next();
                     System.out.println("Dados inseridos com sucesso");
                    break;
                   
                     case 2:
                         mostrar();
                         System.out.println("Digite qualquer coisa para continuar");
                         scanner.next();
                     break;
                         
                     case 3:
                         break;
                     
                     case 4:
                         break;
                         
                     case 5:
                         break;
                         
                     case 6:
                         break;
                         
                }
            }
           try{
                File  file = new File("/Users/Matheus/Desktop/tarefa.txt");
                if(!file.exists()){
                    file.createNewFile();
                }
                FileWriter fw = new FileWriter(file, true);
                BufferedWriter bw = new BufferedWriter(fw);
           
                bw.write("Nome: " + c1.getNome());               
                bw.newLine();
                bw.write("Endereco: "  + c1.getEndereco());
                bw.newLine();
                bw.write("Telefone: " + c1.getTelefone());
                bw.newLine();
                
                bw.close();
                fw.close();
            }
        
           catch(IOException e){
               e.printStackTrace();
           }  
    }
}