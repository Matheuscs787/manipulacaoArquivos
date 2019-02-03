package agenda;

public class Contato {
    
    public static String nome;
    public static String telefone;
    public static String endereco;
    
    public Contato(){
        
    }
    
    public Contato(String nome, String telefone, String endereco){
        this.nome = nome;
        this.telefone = telefone;
        this.endereco = endereco;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getTelefone() {
        return telefone;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }

    public String getEndereco() {
        return endereco;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    /**
     *
     * @return
     */
    @Override
      public String toString(){
          return this.nome;
      }
}