# - SOBRE
A horta foi desenvolvida durante as aulas de TCC na Etec Joaquim Ferreira do Amaral (Jahu, SP) por: Ana Júlia Fabretti Sabbadini Francisco, Enzo Vendramini Paggiaro, Giulia Ventura Favaro, Isabel Da Silva Pantalhão, Udymilla Gonçalves Chagas, Victoria Fernanda Guerra Góes. A horta além de ser totalmente autossuficiente, ela também é sustentável por conta da reutilização de materiais para a contrução da estufa, para a base e também por conta que a água irrigada na horta é filtrada por um sistema de filtração feito dentro da terra ultilizando os materiais adequados, assim, a água que irriga a planta volta para o reservatório filtrada, diminuindo a frequência da qual a água necessita ser trocada.

# INTRODUÇÃO
O projeto visa auxiliar agricultores de pequeno porte com uma estrutura tecnológica feita a partir de sistema Arduino que conta com sensores de luminosidade, umidade, que possibilitará a criação de sistemas de irrigação e iluminação automáticos com o objetivo de melhorar o crescimento e desenvolvimento da planta de acordo com a necessidade de produtividade do agricultor.

# VERTENTES
O projeto pode abranger e beneficiar mais áreas além do seu proposito inicial de agricultores de pequeno e médio porte. Nas nossas vidas cotidianas, frequentemente, nos deparamos com constantes queixas de idosos frustrados por não conseguir realizar algumas tarefas do dia a dia principalmente relacionadas às coisas que têm a necessidade de alguma atividade que exige movimentos como, por exemplo, se agachar, ajoelhar, pois encontram dificuldades devido à saúde e a idade mais avançada. Sendo assim, a base da horta faz com que a estufa fique na linha da cintura da pessoa.

# MOCKUP
Ilustração da horta em 3D (Sem o sistema)

<img src="https://github.com/enzoven/Horta-Inteligente/blob/main/Horta_Inteligente/images/mockups.png?raw=true" height="300">

# COMPONENTES
### - Placa Compatível Arduino UNO R3
Arduino é uma placa de prototipagem eletrônica de código aberto. Inclui hardware e software livre e visa oferecer ferramentas adaptáveis para a criação de projetos interativos de diversas ordens. O microcontrolador é a base inicial para toda a estrutura eletrônica do projeto.

<img src="https://github.com/enzoven/Horta-Inteligente/blob/main/Horta_Inteligente/images/arduinouno.png?raw=true" height="150">

### - Módulo Sensor de Umidade De Solo 
O sensor de umidade do solo consiste em 2 partes: uma sonda que entra em contato com o solo, e um pequeno módulo contendo um chip comparador, que vai ler os dados que vêm do sensor e enviá-los para o microcontrolador. O sensor tem a finalidade de detectar e medir variações de umidade do solo. Caso o solo esteja seco o sensor mantém a saída em nível alto e quando o solo estiver úmido a saída se mantém em nível baixo.

<img src="https://github.com/enzoven/Horta-Inteligente/blob/main/Horta_Inteligente/images/sensorumidade.png?raw=true" height="150">

### - Bomba De Água 
Uma bomba de água simples e pequena, cabendo na palma da mão, principal distribuidora de água no sistema de irrigação uilizada junto ao sensor de umidade, ela é responsável por puxar a água até a horta para que a planta seja irrigada, utilizando a pressão, ela puxa a água que está localizada em um recipiente apropriado.

<img src="https://github.com/enzoven/Horta-Inteligente/blob/main/Horta_Inteligente/images/bombinha.png?raw=true" height="150">

### - Display LCD
Um display que mostra as informações dos componentes da horta, como por exemplo, se a bomba de água está ligada ou desligada, assim como a luz que acompanha a estufa.

<img src="https://github.com/enzoven/Horta-Inteligente/blob/main/Horta_Inteligente/images/displaylcd.png?raw=true" height="150">
