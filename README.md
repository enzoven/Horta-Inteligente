# 🌱 Sobre a horta

A horta foi desenvolvida durante as aulas de **TCC** na Etec Joaquim Ferreira do Amaral (Jahu, SP) por:

- **Ana Júlia Fabretti Sabbadini Francisco**
- **Enzo Vendramini Paggiaro**
- **Giulia Ventura Favaro**
- **Isabel Da Silva Pantalhão**
- **Udymilla Gonçalves Chagas**
- **Victoria Fernanda Guerra Góes**

Além de ser totalmente **autossuficiente**, a horta é **sustentável** porque os materiais utilizados na construção da estufa e da base podem ser **reaproveitados**.

A água da irrigação é **filtrada** através de um sistema feito no interior da terra, utilizando materiais adequados.

A água é devolvida ao reservatório filtrado, diminuindo a **frequência** de troca.

# 💡 Introdução

O projeto visa auxiliar **agricultores** de pequeno porte com uma **estrutura tecnológica.** 

Feita a partir de sistema **Arduino** que conta com **sensores** de luminosidade e umidade.

Isso possibilitará a criação de **sistemas de irrigação** e iluminação **automáticos** com o objetivo de **melhorar** o crescimento e desenvolvimento da planta de acordo com a necessidade de **produtividade** do agricultor.

# 🎯 Vertentes

******************************************************************************Aqui estão listados os objetivos que o projeto busca resolver.******************************************************************************

## Acessibilidade

O projeto pode abranger e **beneficiar** mais áreas além do seu proposito inicial de agricultores de pequeno e médio porte. 

No cotidiano, nos deparamos com diversas queixas de pessoas **frustradas** por não conseguir realizar algumas tarefas relacionadas com alguma atividade que exige **movimento** como, se agachar ou ajoelhar, pois encontram **dificuldades** devido à **limitações**.

Sendo assim, a **base da horta** faz com que a estufa fique na l**inha da cintura da pessoa**.

## Tempo

O projeto alcança pessoas que estão **sem tempo** para se preocupar com uma horta, mas gostam de um ambiente mais **natural**.

Em uma **época moderna**, diversas pessoas relatam a falta de tempo devido suas obrigações e responsabilidades.

Sendo assim, desde uma **simples planta até uma horta**, o sistema faz com que não seja necessario a preocupação com a **saúde das mesmas**.

# 🤖 Mockup

******************************************************************************Ilustratação em 2D e 3D da estrutura sem o sistema.******************************************************************************

<img src="https://github.com/enzoven/Horta-Inteligente/blob/main/Horta_Inteligente/mockups.png?raw=true" height="300">

# 💾 Componentes

- **Placa Compatível Arduino UNO R3**

**Arduino** é uma placa de **prototipagem eletrônica** de **código aberto**. Inclui **hardware** e **software livre** e visa oferecer **ferramentas adaptáveis** para a criação de **projetos interativos** de diversas ordens. O **microcontrolador** é a base inicial para toda a **estrutura eletrônica** do projeto.

<img src="https://github.com/enzoven/Horta-Inteligente/blob/main/Horta_Inteligente/arduinouno.png?raw=true" height="200">

- **Módulo Sensor de Umidade De Solo**

O **sensor de umidade** do solo consiste em 2 partes: uma **sonda** que entra em **contato** com o solo, e um pequeno **módulo** contendo um **chip comparador**, que vai ler os **dados** que vêm do sensor e enviá-los para o **microcontrolador**. 

O sensor tem a finalidade de **detectar e medir variações de umidade do solo**. 

Caso o solo esteja **seco** o sensor **mantém a saída em nível alto** e quando o solo estiver **úmido** a saída se **mantém em nível baixo**.

<img src="https://github.com/enzoven/Horta-Inteligente/blob/main/Horta_Inteligente/sensorumidade.png?raw=true" height="200">

- **Bomba De Água**

Uma bomba de água simples e pequena, cabendo na palma da mão, principal **distribuidora** de água no sistema de **irrigação** uilizada junto ao sensor de **umidade**, ela é responsável por **puxar** a água até a horta para que a planta seja **irrigada**, utilizando a **pressão**, ela puxa a água que está localizada em um recipiente **apropriado**.

<img src="https://github.com/enzoven/Horta-Inteligente/blob/main/Horta_Inteligente/bombinha.png?raw=true" height="200">

- **Display LCD**

Um **display** que mostra as **informações** dos **componentes** da horta, como por exemplo, se a bomba de água está **ligada** ou **desligada**, assim como a luz que acompanha a estufa.

<img src="https://github.com/enzoven/Horta-Inteligente/blob/main/Horta_Inteligente/displaylcd.png?raw=true" height="200">
