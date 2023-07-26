#include<iostream> // permite que o programa realize entrada e saída
#include <locale>

int main() 
{
    setlocale(LC_ALL,"portuguese");
    int number1; 

    std::cout << "Digite o primeiro inteiro: " ;//  pede dados do usuário
    std::cin >> number1;
    
    int number2; 
    int sum;

    std::cout << "Digite o segundo inteiro: ";
    std::cin >> number2;
    sum = number1 + number2;
    std::cout << "A soma é " << sum << std::endl; // O manipulador de stream std::endl mostra a soma; fim da linha
/*std:: antes de cout, cin e endl. Isso é necessário quando usamos os arquivos de cabeçalho C++ padrão A notação std::cout especifica que estamos usando um nome, nesse caso cout, que pertence ao namespace std. Os namespaces são
um recurso avançado da C++ que não discutiremos nos capítulos introdutórios de C++. Por enquanto, você deve simplesmente se
lembrar de incluir std:: antes de cada menção de cout, cin e endl em um programa. */

}