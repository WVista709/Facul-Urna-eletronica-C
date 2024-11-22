#include <stdio.h>

int main(){
	//Candidatos
	int partido_candidato_1, partido_candidato_2, partido_candidato_3, partido_candidato_4;
	char nome_candidato_1[100], nome_candidato_2[100], nome_candidato_3[100], nome_candidato_4[100];
	int idade_candidato_1, idade_candidato_2, idade_candidato_3, idade_candidato_4;
	int numero_candidato_1, numero_candidato_2, numero_candidato_3, numero_candidato_4;
	int voto_candidato_1, voto_candidato_2, voto_candidato_3, voto_candidato_4, voto, voto_branco, voto_nulo, votos_validos;
	float porcento_votos_1, porcento_votos_2, porcento_votos_3, porcento_votos_4;
	int candidato_segundo_turno_1, candidato_segundo_turno_2;
	
	int iniciar_votacao = 0, encerrar_votacao = 0, computar_votos = 0;
	
	//Menu
	int menu;
	
	//Escolhendo o menu
	while(1){
		//Interface
		printf("Escolha uma opcao.\n 1 - Incluir Candidatos\n 2 - Iniciar Votação\n 3 - Encerrar Votação\n 4 - Computar Votas\n");
		
		if (scanf("%d", &menu) == 1){
			if (menu >= 1 && menu <= 4){
				if (menu == 1){
					//Saindo do loop
					break;	
				} else if (menu == 2 && iniciar_votacao == 1 ){
					//Saindo do loop
					break;
				} else if (menu == 3 && encerrar_votacao == 1){
					//Saindo do loop
					break;
				} else if (menu == 4 && computar_votos == 1){
					//Saindo do loop
					break;
				}
				
			} else {
				printf("ERRO: Digite entre 1 a 4.\n");
				fseek(stdin, 0, SEEK_END);
			}
		} else {
			printf("ERRO: Digite apenas numeros.\n");
			fseek(stdin, 0, SEEK_END);
		}
	}
	
	//Sistema de votação
	switch(menu){
		//Cadastrando os candidatos
		case 1:
			//Candidato 1
			//Criando o partido
			printf("Primeiro Candidato\n");
			printf("Partido do candidato: ");
			scanf(" %[^\n]", &partido_candidato_1);
			
			//Criando o nome
			printf("Nome do candidato: ");
			scanf(" %[^\n]", &nome_candidato_1);
			
			//Criando a idade
			while(1){
				printf("Idade do candidato: ");
				if (scanf("%d", &idade_candidato_1) == 1){
					//Garantind oque seje apenas 2 digitos
					if (idade_candidato_1 >= 21){
						//Saindo do loop
						break;
					} else {
						printf("ERRO: Seje maior de 21 anos idade.\n");
						fseek(stdin, 0, SEEK_END);
					}
				} else {
					printf("ERRO: Somente numeros.\n");
					fseek(stdin, 0, SEEK_END);
				}
			}
			
			//Criando o numero
			while(1){
				printf("Numero do candidato: ");
				if (scanf("%d", &numero_candidato_1) == 1){
					//Garantind oque seje apenas 2 digitos
					if (numero_candidato_1 > 0 && numero_candidato_1 < 100){
						if (numero_candidato_1 != numero_candidato_2 && numero_candidato_1 != numero_candidato_3 && numero_candidato_1 != numero_candidato_4){
							//Saindo do loop
							break;
						} else {
							printf("ERRO: Pode ter o mesmo digito.\n");
						}
					} else {
						printf("ERRO: APenas dois digitos.\n");
						fseek(stdin, 0, SEEK_END);
					}
				} else {
					printf("ERRO: Somente numeros.\n");
					fseek(stdin, 0, SEEK_END);
				}
			}
			
			//Candidato 2
			//Criando o partido
			printf("Segundo Candidato\n");
			printf("Partido do candidato: ");
			scanf(" %[^\n]", &partido_candidato_2);
			
			//Criando o nome
			printf("Nome do candidato: ");
			scanf(" %[^\n]", &nome_candidato_2);
			
			//Criando a idade
			while(1){
				printf("Idade do candidato: ");
				if (scanf("%d", &idade_candidato_2) == 1){
					//Garantind oque seje apenas 2 digitos
					if (idade_candidato_2 >= 21){
						//Saindo do loop
						break;
					} else {
						printf("ERRO: Seje maior de 21 anos idade.\n");
						fseek(stdin, 0, SEEK_END);
					}
				} else {
					printf("ERRO: Somente numeros.\n");
					fseek(stdin, 0, SEEK_END);
				}
			}
			
			//Criando o numero
			while(1){
				printf("Numero do candidato: ");
				if (scanf("%d", &numero_candidato_2) == 1){
					//Garantind oque seje apenas 2 digitos
					if (numero_candidato_2 > 0 && numero_candidato_2 < 100){
						if (numero_candidato_2 != numero_candidato_1 && numero_candidato_2 != numero_candidato_3 && numero_candidato_2 != numero_candidato_4){
							//Saindo do loop
							break;
						} else {
							printf("ERRO: Pode ter o mesmo digito.\n");
						}
					} else {
						printf("ERRO: APenas dois digitos.\n");
						fseek(stdin, 0, SEEK_END);
					}
				} else {
					printf("ERRO: Somente numeros.\n");
					fseek(stdin, 0, SEEK_END);
				}
			}
			
			//Candidato 3
			//Criando o partido
			printf("Terceiro Candidato\n");
			printf("Partido do candidato: ");
			scanf(" %[^\n]", &partido_candidato_3);
			
			//Criando o nome
			printf("Nome do candidato: ");
			scanf(" %[^\n]", &nome_candidato_3);
			
			//Criando a idade
			while(1){
				printf("Idade do candidato: ");
				if (scanf("%d", &idade_candidato_3) == 1){
					//Garantind oque seje apenas 2 digitos
					if (idade_candidato_3 >= 21){
						//Saindo do loop
						break;
					} else {
						printf("ERRO: Seje maior de 21 anos idade.\n");
						fseek(stdin, 0, SEEK_END);
					}
				} else {
					printf("ERRO: Somente numeros.\n");
					fseek(stdin, 0, SEEK_END);
				}
			}
			
			//Criando o numero
			while(1){
				printf("Numero do candidato: ");
				if (scanf("%d", &numero_candidato_3) == 1){
					//Garantind oque seje apenas 2 digitos
					if (numero_candidato_3 > 0 && numero_candidato_3 < 100){
						if (numero_candidato_3 != numero_candidato_1 && numero_candidato_3 != numero_candidato_2 && numero_candidato_3 != numero_candidato_4){
							//Saindo do loop
							break;
						} else {
							printf("ERRO: Pode ter o mesmo digito.\n");
						}
					} else {
						printf("ERRO: APenas dois digitos.\n");
						fseek(stdin, 0, SEEK_END);
					}
				} else {
					printf("ERRO: Somente numeros.\n");
					fseek(stdin, 0, SEEK_END);
				}
			}
			
			//Candidato 4
			//Criando o partido
			printf("Quarto Candidato\n");
			printf("Partido do candidato: ");
			scanf(" %[^\n]", &partido_candidato_4);
			
			//Criando o nome
			printf("Nome do candidato: ");
			scanf(" %[^\n]", &nome_candidato_4);
			
			//Criando a idade
			while(1){
				printf("Idade do candidato: ");
				if (scanf("%d", &idade_candidato_4) == 1){
					//Garantind oque seje apenas 2 digitos
					if (idade_candidato_4 >= 21){
						//Saindo do loop
						break;
					} else {
						printf("ERRO: Seje maior de 21 anos idade.\n");
						fseek(stdin, 0, SEEK_END);
					}
				} else {
					printf("ERRO: Somente numeros.\n");
					fseek(stdin, 0, SEEK_END);
				}
			}
			
			//Criando o numero
			while(1){
				printf("Numero do candidato: ");
				if (scanf("%d", &numero_candidato_4) == 1){
					//Garantind oque seje apenas 2 digitos
					if (numero_candidato_4 > 0 && numero_candidato_4 < 100){
						if (numero_candidato_4 != numero_candidato_1 && numero_candidato_4 != numero_candidato_2 && numero_candidato_4 != numero_candidato_3){
							//Saindo do loop
							break;
						} else {
							printf("ERRO: Pode ter o mesmo digito.\n");
						}
					} else {
						printf("ERRO: APenas dois digitos.\n");
						fseek(stdin, 0, SEEK_END);
					}
				} else {
					printf("ERRO: Somente numeros.\n");
					fseek(stdin, 0, SEEK_END);
				}
			}
			
			iniciar_votacao = 1;
			
			//Interface
			printf("Escolha uma opcao.\n 1 - Incluir Candidatos\n 2 - Iniciar Votação\n 3 - Encerrar Votação\n 4 - Computar Votas\n");
			
			//Escolhendo o menu
			while(1){
				if (scanf("%d", &menu) == 1){
					if (menu >= 1 && menu <= 4){
						if (menu == 1){
							//Saindo do loop
							break;	
						} else if (menu == 2 && iniciar_votacao == 1 ){
							//Saindo do loop
							break;
						} else if (menu == 3 && encerrar_votacao == 1){
							//Saindo do loop
							break;
						} else if (menu == 4 && computar_votos == 1){
							//Saindo do loop
							break;
						}
						
					} else {
						printf("ERRO: Digite entre 1 a 4.\n");
						fseek(stdin, 0, SEEK_END);
					}
				} else {
					printf("ERRO: Digite apenas numeros.\n");
					fseek(stdin, 0, SEEK_END);
				}
			}
		
		//Votação
		case 2:
			// Processo de votação
            while (1) {
                printf("Digite o numero do candidato (00 para voto em branco, -1 para encerrar): ");
                if (scanf("%d", &voto) == 1) {
                	if (voto == -1) {
	                    encerrar_votacao = 1;
	                    break;
	                } else if (voto < 100 && voto >= 0) {
                		if (voto == numero_candidato_1) {
	                        voto_candidato_1 += 200000;
	                    } else if (voto == numero_candidato_2) {
	                        voto_candidato_2 += 200000;
	                    } else if (voto == numero_candidato_3) {
	                        voto_candidato_3 += 200000;
	                    } else if (voto == numero_candidato_4) {
	                        voto_candidato_4 += 200000;
	                    } else if (voto == 0) {
	                        printf("Voto em branco.\n");
	                        voto_branco++;
	                    } else {
	                        voto_nulo++;
	                    }	
					} else {
                    printf("ERRO: Digite um numero valido.\n");
                    fseek(stdin, 0, SEEK_END);
                	}
                } else {
                    printf("ERRO: Digite um numero valido.\n");
                    fseek(stdin, 0, SEEK_END);
                }
            }
		
		//Encerrando a votação
		case 3:
			printf("\nVotacao encerrada.\n");
            computar_votos = 1;
			
			printf("\nComputando os votos.\n");
			menu = 4;
		
		//Computando os votos
		case 4:
			//Somando os votos
            votos_validos = voto_candidato_1 + voto_candidato_2 + voto_candidato_3 + voto_candidato_4;
			
			//Porcentagem
			porcento_votos_1 = ((float)voto_candidato_1 / votos_validos) * 100.0;
			porcento_votos_2 = ((float)voto_candidato_2 / votos_validos) * 100.0;
			porcento_votos_3 = ((float)voto_candidato_3 / votos_validos) * 100.0;
			porcento_votos_4 = ((float)voto_candidato_4 / votos_validos) * 100.0;
			
			printf("Resultado da votacao:\n");
            printf("Candidato 1 (%s): %d votos %.2f\n", nome_candidato_1, voto_candidato_1, porcento_votos_1);
            printf("Candidato 2 (%s): %d votos %.2f\n", nome_candidato_2, voto_candidato_2, porcento_votos_2);
            printf("Candidato 3 (%s): %d votos %.2f\n", nome_candidato_3, voto_candidato_3, porcento_votos_3);
            printf("Candidato 4 (%s): %d votos %.2f\n", nome_candidato_4, voto_candidato_4, porcento_votos_4);
            
            //Se o municipio tiver mais de 200 mil eleitores pode precisar de segundo turno
            if (votos_validos >= 200000){
            	//Verificando se os candidatos possui mais da metade significa que nao ha segundo turno
            	if (voto_candidato_1 > voto_candidato_2 + voto_candidato_3 + voto_candidato_4){
            		printf("Candidato eleito %s com %d votos", nome_candidato_1, voto_candidato_1);
            		break;
				} else if (voto_candidato_2 > voto_candidato_1 + voto_candidato_3 + voto_candidato_4){
            		printf("Candidato eleito %s com %d votos", nome_candidato_2, voto_candidato_2);
            		break;
            	} else if (voto_candidato_3 > voto_candidato_1 + voto_candidato_2 + voto_candidato_4){ 
            		printf("Candidato eleito %s com %d votos", nome_candidato_3, voto_candidato_3);
            		break;
            	} else if (voto_candidato_4 > voto_candidato_1 + voto_candidato_2 + voto_candidato_3){
            		printf("Candidato eleito %s com %d votos", nome_candidato_4, voto_candidato_4);
            		break;
            	} else { // Verificando quem possui os dois maiores votos
				    int max1 = -1, max2 = -1;
				    int candidato1 = -1, candidato2 = -1;
				
				    if (voto_candidato_1 > max1) {
				        max2 = max1;
				        candidato2 = candidato1;
				        max1 = voto_candidato_1;
				        candidato1 = 1;
				    } else if (voto_candidato_1 > max2) {
				        max2 = voto_candidato_1;
				        candidato2 = 1;
				    }
				
				    if (voto_candidato_2 > max1) {
				        max2 = max1;
				        candidato2 = candidato1;
				        max1 = voto_candidato_2;
				        candidato1 = 2;
				    } else if (voto_candidato_2 > max2) {
				        max2 = voto_candidato_2;
				        candidato2 = 2;
				    }
				
				    if (voto_candidato_3 > max1) {
				        max2 = max1;
				        candidato2 = candidato1;
				        max1 = voto_candidato_3;
				        candidato1 = 3;
				    } else if (voto_candidato_3 > max2) {
				        max2 = voto_candidato_3;
				        candidato2 = 3;
				    }
				
				    if (voto_candidato_4 > max1) {
				        max2 = max1;
				        candidato2 = candidato1;
				        max1 = voto_candidato_4;
				        candidato1 = 4;
				    } else if (voto_candidato_4 > max2) {
				        max2 = voto_candidato_4;
				        candidato2 = 4;
				    }
				
				    printf("Iniciar segundo turno entre Candidato %d e Candidato %d.\n", candidato1, candidato2);
				
				    candidato_segundo_turno_1 = candidato1;
				    candidato_segundo_turno_2 = candidato2;
				    menu = 5;
				}
			} else {
                //Caso de menos de 200000 votos, vencedor direto
                int vencedor = 1;
                int max_votos = voto_candidato_1;

                if (voto_candidato_2 > max_votos) {
                    vencedor = 2;
                    max_votos = voto_candidato_2;
                }
                if (voto_candidato_3 > max_votos) {
                    vencedor = 3;
                    max_votos = voto_candidato_3;
                }
                if (voto_candidato_4 > max_votos) {
                    vencedor = 4;
                    max_votos = voto_candidato_4;
                } else if (voto_candidato_1 == max_votos || voto_candidato_2 == max_votos || voto_candidato_3 == max_votos || voto_candidato_4 == max_votos) { // Caso de empate: verificar a idade dos candidatos empatados
				    int idade_vencedor = (vencedor == 1) ? idade_candidato_1 :
				                         (vencedor == 2) ? idade_candidato_2 :
				                         (vencedor == 3) ? idade_candidato_3 :
				                         idade_candidato_4;
				
				    if (voto_candidato_1 == max_votos && idade_candidato_1 > idade_vencedor) {
				        vencedor = 1;
				        idade_vencedor = idade_candidato_1;
				    }
				    if (voto_candidato_2 == max_votos && idade_candidato_2 > idade_vencedor) {
				        vencedor = 2;
				        idade_vencedor = idade_candidato_2;
				    }
				    if (voto_candidato_3 == max_votos && idade_candidato_3 > idade_vencedor) {
				        vencedor = 3;
				        idade_vencedor = idade_candidato_3;
				    }
				    if (voto_candidato_4 == max_votos && idade_candidato_4 > idade_vencedor) {
				        vencedor = 4;
				        idade_vencedor = idade_candidato_4;
				    }
				}

                printf("Como a cidade possui menos de 200000 eleitores, o vencedor eh o Candidato %d!\n", vencedor);
            }
        
        //Segundo turno
        case 5:
        	//Processo de votação
		    while (1) {
		        printf("Digite o número do candidato (00 para voto em branco, -1 para encerrar): ");
		        
		        if (scanf("%d", &voto) == 1) {
		            if (voto == -1) {
		                encerrar_votacao = 1;
		                menu = 6; //Ir para a próxima etapa após encerrar o segundo turno
		                break;
		            } else if (voto == 0) {
		                printf("Voto em branco.\n");
		                voto_branco++;
		            } else if (voto == candidato_segundo_turno_1) {
		                printf("Voto para Candidato %d.\n", candidato_segundo_turno_1);
		                voto_candidato_1++;
		            } else if (voto == candidato_segundo_turno_2) {
		                printf("Voto para Candidato %d.\n", candidato_segundo_turno_2);
		                voto_candidato_2++;
		            } else {
		                printf("ERRO: Digite um número válido.\n");
		                voto_nulo++;
		            }
		        } else {
		            printf("ERRO: Digite um número válido.\n");
		            fseek(stdin, 0, SEEK_END); //Limpar o buffer para evitar loops infinitos em caso de entrada inválida
		        }
		    }
		case 6:
			printf("\n--- Resultado Final do Segundo Turno ---\n");

		    //Exibindo votos de cada candidato do segundo turno
		    printf("Candidato %d: %d votos\n", candidato_segundo_turno_1, voto_candidato_1);
		    printf("Candidato %d: %d votos\n", candidato_segundo_turno_2, voto_candidato_2);
		
		    //Exibindo votos em branco e nulos
		    printf("Votos em branco: %d\n", voto_branco);
		    printf("Votos nulos: %d\n", voto_nulo);
		
		    //Determinando o vencedor
		    if (voto_candidato_1 > voto_candidato_2) {
		        printf("O vencedor é o Candidato %d!\n", candidato_segundo_turno_1);
		    } else if (voto_candidato_2 > voto_candidato_1) {
		        printf("O vencedor é o Candidato %d!\n", candidato_segundo_turno_2);
		    } else {
			    // Empate: Verificar a idade para decidir o vencedor
			    if (idade_candidato_1 > idade_candidato_2) {
			        printf("Empate! O vencedor é o Candidato %d por ser o mais velho.\n", candidato_segundo_turno_1);
			    } else if (idade_candidato_2 > idade_candidato_1) {
			        printf("Empate! O vencedor é o Candidato %d por ser o mais velho.\n", candidato_segundo_turno_2);
			    } else {
			        printf("Empate total! Ambos os candidatos têm a mesma idade. Nova eleição necessária.\n");
			    }
			}
		
		    //Encerrar o programa ou voltar para o menu inicial
		    encerrar_votacao = 1; //Pode ser usado para encerrar o loop principal do programa
		    break;
			}
	
	return 0;
}
