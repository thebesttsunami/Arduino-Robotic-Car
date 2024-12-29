// Mendefinisikan pin untuk motor dan motor driver L298N
const int motor1Pin1 = 5;  // IN1 pada L298N
const int motor1Pin2 = 6;  // IN2 pada L298N
const int motor2Pin1 = 9;  // IN3 pada L298N
const int motor2Pin2 = 10; // IN4 pada L298N

const int enableA = 3;  // ENA untuk kecepatan motor 1 (PWM)
const int enableB = 11; // ENB untuk kecepatan motor 2 (PWM)

void setup() {
  // Mengatur pin kontrol motor sebagai output
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
  pinMode(enableA, OUTPUT);
  pinMode(enableB, OUTPUT);

  // Mengaktifkan motor (dengan PWM untuk mengatur kecepatan)
  analogWrite(enableA, 255);  // Kecepatan motor 1 (255 = maksimal)
  analogWrite(enableB, 255);  // Kecepatan motor 2 (255 = maksimal)
}

void loop() {
  maju();    // Panggil fungsi maju
  delay(2000); // Bergerak maju selama 2 detik
  mundur();  // Panggil fungsi mundur
  delay(2000); // Bergerak mundur selama 2 detik
  belokKiri(); // Panggil fungsi belok kiri
  delay(2000); // Belok kiri selama 2 detik
  belokKanan(); // Panggil fungsi belok kanan
  delay(2000); // Belok kanan selama 2 detik

berhenti(); // Panggil fungsi berhenti
  delay(2000); // Berhenti selama 2 detik
}

// Fungsi untuk bergerak maju
void maju() {
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
}

// Fungsi untuk bergerak mundur
void mundur() {
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
}

// Fungsi untuk belok kiri
void belokKiri() {
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
}

// Fungsi untuk belok kanan
void belokKanan() {
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
}

// Fungsi untuk berhenti
void berhenti() {
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, LOW);
}
