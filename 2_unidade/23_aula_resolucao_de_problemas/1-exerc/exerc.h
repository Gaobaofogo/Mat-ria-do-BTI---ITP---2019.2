struct Horario {
  int hora;
  int minutos;
  int segundos;
};

struct Data {
  int dia;
  int mes;
  int ano;
}

struct Compromisso {
  struct Horario horario;
  struct Data data;
  char texto[100];
}
