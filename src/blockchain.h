

#define PUBLIC_ADDRESS_SIZE 500

typedef struct {
  int time_of;
  char sender[PUBLIC_ADDRESS_SIZE];
  char recipient[PUBLIC_ADDRESS_SIZE];
  int amount;
  char signature[500];
} Transaction;