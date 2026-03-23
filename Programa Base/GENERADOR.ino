 #include <TimerOne.h>

#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

int botao = 0;
int tecla = 0;
int menu = 1;
float rpm = 0;
float rps = 0;
float tempo = 0;
int contador = 0;
float potenciometro = 0;
float tensao_pot = 0;
int dientes = 1;
int espacios = 1;
int contador1 = 1;
int contador2 = 1;
int cont_frontier = 1;
int cont_amarok = 1;
int cont_brava = 1;
int cont_Civic_1_6 = 1;
int cont_sentra = 1;
int cont_ka = 1;
int cont_tucson = 1;
int cont_pld    = 1;
int cont_fusion = 1;

////////////////Interrupcao Timer1/////////////////////

void interrupcao()
{
  contador = contador + 1;

  if (menu == 110)
  {
    if (contador >= 0 && contador <= 116)
    {
      digitalWrite(13, !digitalRead(13));
      digitalWrite(11, !digitalRead(11));
      if (digitalRead(13) == 1)
      {
        digitalWrite(12, LOW);
      }
      if (digitalRead(13) == 0)
      {
        digitalWrite(12, HIGH);
      }
    }
    if (contador > 116)
    {
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      if (contador >= 119)
      {
        contador = 0;
      }
    }
  }

  if (menu == 111)
  {
    if (contador >= 0 && contador <= 80)
    {
      digitalWrite(13, !digitalRead(13));
      digitalWrite(11, !digitalRead(11));
      if (digitalRead(13) == 1)
      {
        digitalWrite(12, LOW);
      }
      if (digitalRead(13) == 0)
      {
        digitalWrite(12, HIGH);
      }
    }
    if (contador > 80)
    {
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      if (contador >= 87)
      {
        contador = 0;
      }
    }
  }

  if (menu == 112)
  {
    if (contador >= 0 && contador <= 70)
    {
      digitalWrite(13, !digitalRead(13));
      digitalWrite(11, !digitalRead(11));
      if (digitalRead(13) == 1)
      {
        digitalWrite(12, LOW);
      }
      if (digitalRead(13) == 0)
      {
        digitalWrite(12, HIGH);
      }
    }
    if (contador > 70)
    {
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      if (contador >= 71)
      {
        contador = 0;
      }
    }
  }

  if (menu == 113)
  {
    if (contador >= 0 && contador <= 68)
    {
      digitalWrite(13, !digitalRead(13));
      digitalWrite(11, !digitalRead(11));
      if (digitalRead(13) == 1)
      {
        digitalWrite(12, LOW);
      }
      if (digitalRead(13) == 0)
      {
        digitalWrite(12, HIGH);
      }
    }
    if (contador > 68)
    {
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      if (contador >= 71)
      {
        contador = 0;
      }
    }
  }

  if (menu == 115)
  {
    digitalWrite(11, !digitalRead(11));
  }

  if (menu == 117)
  {
    if (contador >= 0 && contador <= ((dientes * 2) - (2 * espacios)))
    {
      digitalWrite(13, !digitalRead(13));
      digitalWrite(11, !digitalRead(11));
      if (digitalRead(13) == 1)
      {
        digitalWrite(12, LOW);
      }
      if (digitalRead(13) == 0)
      {
        digitalWrite(12, HIGH);
      }
    }
    if (contador > ((dientes * 2) - (2 * espacios)))
    {
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      if (contador >= ((dientes * 2) - 1))
      {
        contador = 0;
      }
    }
  }

  if (menu == 301)
  {
    if (contador <= 4)
    {
      if (contador == 1) {
        digitalWrite(11, HIGH);
      }
      if (contador == 2) {
        digitalWrite(11, LOW);
      }
      if (contador == 3) {
        digitalWrite(11, HIGH);
      }
      if (contador == 4) {
        digitalWrite(11, LOW);
      }
      digitalWrite(3, LOW);
    }

    if (contador > 4)
    {
      if (contador == 1 || contador == 3) {
        digitalWrite(11, HIGH);
      }
      if (contador == 2 || contador == 4) {
        digitalWrite(11, LOW);
      }

      if (contador >= 5 && contador <= 108)
      {
        if (cont_pld == 1) {
          digitalWrite(11, HIGH);
        }
        if (cont_pld > 1 && cont_pld <= 3) {
          digitalWrite(11, LOW);
        }
        cont_pld = cont_pld + 1;
        if (cont_pld > 3) {
          cont_pld = 1;
        }
      }

      if (contador2 == 1)
      {
        if (contador == 18 || contador == 19 || contador == 36 || contador == 37 || contador == 54 || contador == 55 || contador == 72 || contador == 73 || contador == 90 || contador == 91 || contador >= 108) {
          digitalWrite(3, HIGH);
        }
        else {
          digitalWrite(3, LOW);
        }
      }
      if (contador2 == 2)
      {
        if (contador == 6 || contador == 7 || contador == 18 || contador == 19 || contador == 36 || contador == 37 || contador == 54 || contador == 55 || contador == 72 || contador == 73 || contador == 90 || contador == 91 || contador >= 108) {
          digitalWrite(3, HIGH);
        }
        else {
          digitalWrite(3, LOW);
        }
      }

      if (contador >= 109)
      {
        contador = 0;
        contador2 = contador2 + 1;
        if (contador2 > 2) {
          contador2 = 1;
        }
        cont_pld = 1;
      }
    }

  }

  if (menu == 550)
  {
    if (contador >= 0 && contador < 165)
    {
      if (cont_frontier == 0x00)
      {
        digitalWrite(11, LOW);
      }
      if (cont_frontier > 0 && cont_frontier <= 2)
      {
        digitalWrite(11, HIGH);
      }
      cont_frontier = cont_frontier + 1;
      if (cont_frontier > 2) {
        cont_frontier = 0;
      }
      if (contador2 == 0x01 && contador == 81)
      {
        digitalWrite(3, LOW);
      }
      if (contador2 == 0x01 && contador == 87)
      {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 0x02 && contador == 81)
      {
        digitalWrite(3, LOW);
      }
      if (contador2 == 0x02 && contador == 87)
      {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 0x02 && contador == 156)
      {
        digitalWrite(3, LOW);
      }
      if (contador2 == 0x02 && contador == 162)
      {
        digitalWrite(3, HIGH);
      }
    }
    if (contador >= 165)
    {
      if (contador == 165) {
        digitalWrite(11, HIGH);
      }
      if (contador >= 166 && contador < 177) {
        digitalWrite(11, HIGH);
      }

      if (contador2 == 0x01 && contador == 169) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 0x01 && contador == 175) {
        digitalWrite(3, HIGH);
      }

      if (contador2 == 0x02 && contador == 169) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 0x02 && contador == 175) {
        digitalWrite(3, HIGH);
      }
    }
    if (contador >= 177)
    {
      contador2 = contador2 + 1;
      if (contador2 > 2) {
        contador2 = 1;
      }
      contador = 0;
    }
  }

  if (menu == 551)
  {
    if (contador >= 0 && contador < 57)
    {
      if (cont_amarok == 0x01 && contador == 13)
      {
        digitalWrite(3, HIGH);
      }
      if (cont_amarok == 0x01 && contador == 20)
      {
        digitalWrite(3, LOW);
      }
      if (cont_amarok == 0x01 && contador == 25)
      {
        digitalWrite(3, HIGH);
      }
      if (cont_amarok == 0x02 && contador == 7)
      {
        digitalWrite(3, LOW);
      }
      if (cont_amarok == 0x02 && contador == 26)
      {
        digitalWrite(3, HIGH);
      }
      if (cont_amarok == 0x03 && contador == 16)
      {
        digitalWrite(3, LOW);
      }
      if (cont_amarok == 0x03 && contador == 25)
      {
        digitalWrite(3, HIGH);
      }
      if (cont_amarok == 0x04 && contador == 11)
      {
        digitalWrite(3, LOW);
      }
      if (cont_amarok == 0x04 && contador == 25)
      {
        digitalWrite(3, HIGH);
      }
      if (cont_amarok == 0x04 && contador == 41)
      {
        digitalWrite(3, LOW);
      }
      digitalWrite(11, !digitalRead(11));
      if (contador == 0) {
        digitalWrite(11, LOW);
      }
    }
    if (contador >= 57)
    {
      if (contador >= 57 && contador < 59) {
        digitalWrite(11, LOW);
      }
      if (contador >= 59 && contador < 61) {
        digitalWrite(11, HIGH);
      }

    }
    if (contador >= 60)
    {
      cont_amarok = cont_amarok + 1;
      if (cont_amarok > 4) {
        cont_amarok = 1;
      }
      contador = 0;
    }
  }

  if (menu == 553)
  {
    if (contador >= 0 && contador < 20)
    {
      if (contador == 1 || contador == 4) {
        digitalWrite(11, HIGH);
      }
      if (contador == 11) {
        digitalWrite(11, HIGH);
      }
      if (contador > 1 && contador < 4) {
        digitalWrite(11, LOW);
      }
      if (contador > 4 && contador < 11) {
        digitalWrite(11, LOW);
      }
      if (contador > 11 && contador < 20) {
        digitalWrite(11, LOW);
      }

      if (contador == 17 && cont_brava == 1) {
        digitalWrite(3, LOW);
      }
      if (contador == 19 && cont_brava == 1) {
        digitalWrite(3, HIGH);
      }
      if (contador == 17 && cont_brava == 2) {
        digitalWrite(3, LOW);
      }
      if (contador == 17 && cont_brava == 3) {
        digitalWrite(3, HIGH);
      }
      if (contador == 19 && cont_brava == 3) {
        digitalWrite(3, LOW);
      }
      if (contador == 17 && cont_brava == 4) {
        digitalWrite(3, HIGH);
      }
    }
    if (contador >= 20)
    {
      digitalWrite(11, LOW);
    }
    if (contador == 21)
    {
      cont_brava = cont_brava + 1;
      if (cont_brava > 4) {
        cont_brava = 1;
      }
      contador = 0;
    }
  }
  if (menu == 554)
  {
    if (contador >= 0 && contador < 43)
    {
      if (contador == 1 || contador == 4 || contador == 11 || contador == 22 || contador == 33) {
        digitalWrite(11, HIGH);
      }
      else {
        digitalWrite(11, LOW);
      }
      if (contador == 2 || contador == 3 || contador == 4 || contador == 5 || contador == 7 || contador == 12 || contador == 13 || contador == 14 || contador == 15 || contador == 17 || contador == 23 || contador == 24 || contador == 25 || contador == 26 || contador == 28 || contador == 34 || contador == 35 || contador == 36 || contador == 37 || contador == 39) {
        digitalWrite(3, HIGH);
      }
      else {
        digitalWrite(3, LOW);
      }
    }
    if (contador >= 44)
    {
      contador = 0;
    }
  }

  if (menu == 555)
  {
    if (contador >= 1 && contador <= 17)
    {
      if (cont_Civic_1_6 == 2 || cont_Civic_1_6 == 3) {
        digitalWrite(11, HIGH);
      }
      if (cont_Civic_1_6 == 1) {
        digitalWrite(11, LOW);
      }
      cont_Civic_1_6 = cont_Civic_1_6 + 1;
      if (cont_Civic_1_6 > 3) {
        cont_Civic_1_6 = 1;
      }
      if (contador != 17) {
        digitalWrite(3, HIGH);
      }
      if (contador == 17) {
        digitalWrite(3, LOW);
      }
    }
    if (contador >= 18)
    {
      if (contador == 18) {
        digitalWrite(3, LOW);
      }
      digitalWrite(11, HIGH);
      contador = 0;
      cont_Civic_1_6 = 1;
    }
  }
  if (menu == 556)
  {
    if (contador >= 0 && contador < 114)
    {
      digitalWrite(11, !digitalRead(11));
      if (contador == 26 && contador2 == 1) {
        digitalWrite(3, HIGH);
      }
      if (contador == 37 && contador2 == 1) {
        digitalWrite(3, LOW);
      }
      if (contador == 51 && contador2 == 1) {
        digitalWrite(3, HIGH);
      }
      if (contador == 97 && contador2 == 1) {
        digitalWrite(3, LOW);
      }
      if (contador == 36 && contador2 == 2) {
        digitalWrite(3, LOW);
      }
    }
    if (contador >= 114)
    {
      if (contador == 114 || contador == 115) {
        digitalWrite(11, LOW);
      }
      if (contador == 116 || contador == 117 || contador == 118) {
        digitalWrite(11, HIGH);
      }
      if (contador == 114 && contador2 == 1) {
        digitalWrite(3, HIGH);
      }
    }
    if (contador >= 119)
    {
      digitalWrite(11, LOW);
      contador = 0;
      contador2 = contador2 + 1;
      if (contador2 > 2) {
        contador2 = 1;
      }
    }
  }

  if (menu == 557)
  {
    if (contador >= 0 && contador < 114)
    {
      digitalWrite(11, !digitalRead(11));
      if (contador == 28 && contador2 == 1) {
        digitalWrite(3, HIGH);
      }
      if (contador == 40 && contador2 == 1) {
        digitalWrite(3, LOW);
      }
      if (contador == 57 && contador2 == 1) {
        digitalWrite(3, HIGH);
      }
      if (contador == 101 && contador2 == 1) {
        digitalWrite(3, LOW);
      }
      if (contador == 41 && contador2 == 2) {
        digitalWrite(3, LOW);
      }
      if (contador == 90 && contador2 == 2) {
        digitalWrite(3, HIGH);
      }
      if (contador == 101 && contador2 == 2) {
        digitalWrite(3, LOW);
      }
      if (contador == 28 && contador2 == 3) {
        digitalWrite(3, HIGH);
      }
      if (contador == 40 && contador2 == 3) {
        digitalWrite(3, LOW);
      }
      if (contador == 54 && contador2 == 3) {
        digitalWrite(3, HIGH);
      }
      if (contador == 59 && contador2 == 3) {
        digitalWrite(3, LOW);
      }
      if (contador == 90 && contador2 == 3) {
        digitalWrite(3, HIGH);
      }
      if (contador == 101 && contador2 == 3) {
        digitalWrite(3, LOW);
      }
    }
    if (contador >= 114)
    {
      if (contador == 114 || contador == 115) {
        digitalWrite(11, LOW);
      }
      if (contador == 116 || contador == 117 || contador == 118) {
        digitalWrite(11, HIGH);
      }
      if (contador == 115 && contador2 == 1) {
        digitalWrite(3, HIGH);
      }
    }
    if (contador >= 119)
    {
      digitalWrite(11, LOW);
      contador = 0;
      contador2 = contador2 + 1;
      if (contador2 > 3) {
        contador2 = 1;
      }
    }
  }
  if (menu == 558)
  {
    if (contador >= 0 && contador <= 116)
    {
      digitalWrite(11, !digitalRead(11));
      if (contador == 5 && contador2 == 1) {
        digitalWrite(3, HIGH);
      }
      if (contador == 16 && contador2 == 1) {
        digitalWrite(3, LOW);
      }
      if (contador == 64 && contador2 == 1) {
        digitalWrite(3, HIGH);
      }
      if (contador == 75 && contador2 == 1) {
        digitalWrite(3, LOW);
      }
      if (contador == 85 && contador2 == 1) {
        digitalWrite(3, HIGH);
      }
      if (contador == 17 && contador2 == 2) {
        digitalWrite(3, LOW);
      }
      if (contador == 27 && contador2 == 2) {
        digitalWrite(3, HIGH);
      }
      if (contador == 79 && contador2 == 2) {
        digitalWrite(3, LOW);
      }
    }
    if (contador > 116)
    {
      digitalWrite(11, LOW);
      if (contador >= 119)
      {
        contador = 0;
        contador2 = contador2 + 1;
        if (contador2 > 2) {
          contador2 = 1;
        }
      }
    }
  }
  if (menu == 559)
  {
    if (contador >= 0 && contador <= 116)
    {
      digitalWrite(11, !digitalRead(11));
      if (contador == 16 && contador2 == 1) {
        digitalWrite(3, LOW);
      }
      if (contador == 30 && contador2 == 1) {
        digitalWrite(3, HIGH);
      }
      if (contador == 77 && contador2 == 1) {
        digitalWrite(3, LOW);
      }
      if (contador == 6 && contador2 == 2) {
        digitalWrite(3, HIGH);
      }
      if (contador == 15 && contador2 == 2) {
        digitalWrite(3, LOW);
      }
      if (contador == 65 && contador2 == 2) {
        digitalWrite(3, HIGH);
      }
      if (contador == 75 && contador2 == 2) {
        digitalWrite(3, LOW);
      }
      if (contador == 89 && contador2 == 2) {
        digitalWrite(3, HIGH);
      }
      if (contador == 16 && contador2 == 3) {
        digitalWrite(3, LOW);
      }
      if (contador == 26 && contador2 == 3) {
        digitalWrite(3, HIGH);
      }
      if (contador == 37 && contador2 == 3) {
        digitalWrite(3, LOW);
      }
      if (contador == 64 && contador2 == 3) {
        digitalWrite(3, HIGH);
      }
      if (contador == 75 && contador2 == 3) {
        digitalWrite(3, LOW);
      }
      if (contador == 89 && contador2 == 3) {
        digitalWrite(3, HIGH);
      }
    }
    if (contador > 116)
    {
      digitalWrite(11, LOW);
      if (contador >= 119)
      {
        contador = 0;
        contador2 = contador2 + 1;
        if (contador2 > 3) {
          contador2 = 1;
        }
      }
    }
  }

  if (menu == 560)
  {
    if (contador >= 0 && contador < 114)
    {
      digitalWrite(11, !digitalRead(11));
      if (contador == 79) {
        digitalWrite(3, !digitalRead(3));
      }
    }
    if (contador >= 114)
    {
      if (contador == 114 || contador == 115) {
        digitalWrite(11, LOW);
      }
      if (contador == 116 || contador == 117 || contador == 118) {
        digitalWrite(11, HIGH);
      }
    }
    if (contador >= 119)
    {
      digitalWrite(11, LOW);
      contador = 0;
      contador2 = contador2 + 1;
      if (contador2 > 2) {
        contador2 = 1;
      }
    }
  }

  if (menu == 561)
  {
    if (contador >= 0 && contador <= 73)
    {
      if (contador >= 1 && contador <= 19)
      {
        digitalWrite(11, !digitalRead(11));
      }
      if (contador > 19 && contador <= 25) {
        digitalWrite(11, LOW);
      }
      if (contador > 25 && contador <= 68) {
        digitalWrite(11, !digitalRead(11));
      }
      if (contador > 68) {
        digitalWrite(11, LOW);
      }

      if (contador2 == 1 && contador == 11) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 1 && contador == 16) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 1 && contador == 61) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 1 && contador == 66) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 2 && contador == 37) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 2 && contador == 42) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 2 && contador == 45) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 2 && contador == 47) {
        digitalWrite(3, LOW);
      }

    }

    if (contador >= 74)
    {
      contador = 0;
      contador2 = contador2 + 1;
      if (contador2 > 2) {
        contador2 = 1;
      }
    }
  }

  if (menu == 562)
  {
    if (contador >= 0 && contador <= 46)
    {
      if (cont_sentra == 1) {
        digitalWrite(11, LOW);
      }
      if (cont_sentra > 1 && cont_sentra <= 3) {
        digitalWrite(11, HIGH);
      }
      cont_sentra = cont_sentra + 1;
      if (cont_sentra > 3) {
        cont_sentra = 1;
      }

      if (contador2 == 1 && contador == 5) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 1 && contador == 10) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 1 && contador == 32) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 1 && contador == 44) {
        digitalWrite(3, LOW);
      }

      if (contador2 == 2 && contador == 5) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 2 && contador == 10) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 2 && contador == 15) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 2 && contador == 21) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 2 && contador == 33) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 2 && contador == 44) {
        digitalWrite(3, LOW);
      }

      if (contador2 == 3 && contador == 33) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 3 && contador == 44) {
        digitalWrite(3, LOW);
      }

      if (contador2 == 4 && contador == 33) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 4 && contador == 44) {
        digitalWrite(3, LOW);
      }

      if (contador2 == 5 && contador == 33) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 5 && contador == 44) {
        digitalWrite(3, LOW);
      }

    }
    if (contador > 46 && contador <= 53)
    {
      digitalWrite(11, HIGH);
      if (contador2 == 1 && contador == 49) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 2 && contador == 50) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 5 && contador == 50) {
        digitalWrite(3, HIGH);
      }


    }
    if (contador >= 54)
    {
      if (contador2 == 1 && contador == 54) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 2 && contador == 54) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 5 && contador == 54) {
        digitalWrite(3, LOW);
      }

      cont_sentra = 1;
      contador = 0;
      contador2 = contador2 + 1;
      if (contador2 > 5) {
        contador2 = 1;
      }
    }
  }

  if (menu == 563)
  {
    if (contador >= 1 && contador <= 347)
    {
      if (cont_ka == 1) {
        digitalWrite(11, LOW);
      }
      if (cont_ka > 1 && cont_ka <= 8) {
        digitalWrite(11, HIGH);
      }
      cont_ka = cont_ka + 1;
      if (cont_ka > 6) {
        cont_ka = 1;
      }

      if (contador2 == 1 && contador == 73) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 1 && contador == 124) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 1 && contador == 253) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 2 && contador == 37) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 2 && contador == 73) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 2 && contador == 216) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 2 && contador == 252) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 2 && contador == 302) {
        digitalWrite(3, HIGH);
      }
    }
    if (contador >= 348 && contador <= 366)
    {
      digitalWrite(11, HIGH);
    }
    if (contador >= 367)
    {
      cont_ka = 1;
      contador = 0;
      contador2 = contador2 + 1;
      if (contador2 > 2) {
        contador2 = 1;
      }
    }
  }

  if (menu == 564)
  {
    if (contador >= 0 && contador < 117)
    {
      digitalWrite(11, !digitalRead(11));
      if (contador == 108)
      {
        digitalWrite(3, !digitalRead(3));
      }

    }
    if (contador >= 117)
    {
      digitalWrite(11, HIGH);
    }
    if (contador >= 122)
    {
      contador = 0;
    }
  }
  if (menu == 565)
  {
    if (contador >= 0 && contador < 34 )
    {
      digitalWrite(11, !digitalRead(11));
      if (contador == 24) {
        digitalWrite(3, !digitalRead(3));
      }
    }
    if (contador >= 34 && contador <= 35  )
    {
      digitalWrite(11, LOW);
    }
    if (contador >= 36 && contador <= 66)
    {
      digitalWrite(11, !digitalRead(11));
    }
    if (contador >= 67 && contador <= 69)
    {
      digitalWrite(11, LOW);
    }
    if (contador >= 70)
    {
      contador = 0;
    }
  }

  if (menu == 566)
  {
    if (contador >= 0 && contador <= 116)
    {
      digitalWrite(11, !digitalRead(11));

      if (contador2 == 1 && contador == 22) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 1 && contador == 38) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 1 && contador == 44) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 1 && contador == 97) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 1 && contador == 109) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 2 && contador == 38) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 2 && contador == 82) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 2 && contador == 98) {
        digitalWrite(3, LOW);
      }
    }
    if (contador > 116)
    {
      digitalWrite(11, LOW);
      if (contador >= 119)
      {
        contador = 0;
        contador2 = contador2 + 1;
        if (contador2 > 2) {
          contador2 = 1;
        }
      }
    }
  }

  if (menu == 567)
  {
    if (contador >= 1 && contador < 115)
    {
      digitalWrite(11, !digitalRead(11));
      if (contador2 == 1)
      {
        if (contador == 26) {
          digitalWrite(3, HIGH);
        }
        if (contador == 37) {
          digitalWrite(3, LOW);
        }
        if (contador == 52) {
          digitalWrite(3, HIGH);
        }
        if (contador == 96) {
          digitalWrite(3, LOW);
        }
        if (contador == 113) {
          digitalWrite(3, HIGH);
        }
      }
      if (contador2 == 2)
      {
        if (contador == 35) {
          digitalWrite(3, LOW);
        }
        if (contador == 87) {
          digitalWrite(3, HIGH);
        }
        if (contador == 97) {
          digitalWrite(3, LOW);
        }
      }
    }
    if (contador >= 115 && contador <= 117) {
      digitalWrite(11, LOW);
    }
    if (contador >= 118 && contador <= 120) {
      digitalWrite(11, HIGH);
    }


    if (contador >= 120)
    {
      contador = 0;
      contador2 = contador2 + 1;
      if (contador2 > 2) {
        contador2 = 1;
      }
    }
  }
  if (menu == 568)
  {
    if (contador == 1 || contador == 3 || contador == 6 || contador == 11 || contador == 16 || contador == 21 || contador == 26 || contador == 31 || contador == 36 || contador == 41 || contador == 46 || contador == 51 || contador == 56) {
      digitalWrite(11, HIGH);
    }
    else {
      digitalWrite(11, LOW);
    }

    if (contador2 == 1)
    {
      if (contador >= 1 && contador <= 3) {
        digitalWrite(3, LOW);
      }
      if (contador >= 4 && contador <= 22) {
        digitalWrite(3, HIGH);
      }
      if (contador >= 23 && contador <= 26) {
        digitalWrite(3, LOW);
      }
      if (contador >= 27 && contador <= 52) {
        digitalWrite(3, HIGH);
      }
      if (contador >= 53 && contador <= 56) {
        digitalWrite(3, LOW);
      }
      if (contador == 57) {
        digitalWrite(3, HIGH);
      }
    }
    if (contador2 == 2)
    {
      if (contador == 22) {
        digitalWrite(3, LOW);
      }
      if (contador >= 23 && contador <= 26) {
        digitalWrite(3, LOW);
      }
      if (contador >= 27 && contador <= 52) {
        digitalWrite(3, HIGH);
      }
      if (contador >= 53 && contador <= 56) {
        digitalWrite(3, LOW);
      }
      if (contador == 57) {
        digitalWrite(3, HIGH);
      }
    }

    if (contador >= 60)
    {
      contador = 0;
      contador2 = contador2 + 1;
      if (contador2 > 2) {
        contador2 = 1;
      }
    }
  }

  if (menu == 569)
  {
    if (contador >= 0 && contador <= 116)
    {
      digitalWrite(11, !digitalRead(11));
      if (contador2 == 1 && contador == 5) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 1 && contador == 10) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 1 && contador == 25) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 1 && contador == 30) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 1 && contador == 45) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 1 && contador == 50) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 1 && contador == 65) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 1 && contador == 70) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 1 && contador == 85) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 1 && contador == 90) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 1 && contador == 105) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 1 && contador == 110) {
        digitalWrite(3, HIGH);
      }

      if (contador2 == 2 && contador == 5) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 2 && contador == 10) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 2 && contador == 25) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 2 && contador == 30) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 2 && contador == 35) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 2 && contador == 40) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 2 && contador == 45) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 2 && contador == 50) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 2 && contador == 65) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 2 && contador == 70) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 2 && contador == 85) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 2 && contador == 90) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 2 && contador == 105) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 2 && contador == 110) {
        digitalWrite(3, HIGH);
      }
    }
    if (contador > 116)
    {
      if (contador >= 119)
      {
        contador = 0;
        contador2 = contador2 + 1;
        if (contador2 > 2) {
          contador2 = 1;
        }
      }
    }

  }

  if (menu == 570)
  {
    if (contador >= 1 && contador < 115)
    {
      digitalWrite(11, !digitalRead(11));
      if (contador2 == 1)
      {
        if (contador == 28) {
          digitalWrite(3, HIGH);
        }
        if (contador == 40) {
          digitalWrite(3, LOW);
        }
        if (contador == 56) {
          digitalWrite(3, HIGH);
        }
        if (contador == 100) {
          digitalWrite(3, LOW);
        }
      }
      if (contador2 == 2)
      {
        if (contador == 40) {
          digitalWrite(3, LOW);
        }
        if (contador == 89) {
          digitalWrite(3, HIGH);
        }
        if (contador == 100) {
          digitalWrite(3, LOW);
        }
      }
    }
    if (contador >= 115 && contador <= 116)
    {
      digitalWrite(11, LOW);
      if (contador2 == 1)
      {
        if (contador == 116) {
          digitalWrite(3, HIGH);
        }
      }
    }
    if (contador >= 117 && contador <= 119) {
      digitalWrite(11, HIGH);
    }


    if (contador >= 119)
    {
      contador = 0;
      contador2 = contador2 + 1;
      if (contador2 > 2) {
        contador2 = 1;
      }
    }
  }
  if (menu == 571)
  {
    if (contador >= 1 && contador <= 347)
    {
      if (cont_fusion == 1) {
        digitalWrite(11, LOW);
      }
      if (cont_fusion > 1 && cont_fusion <= 8) {
        digitalWrite(11, HIGH);
      }
      cont_fusion = cont_fusion + 1;
      if (cont_fusion > 6) {
        cont_fusion = 1;
      }

      if (contador2 == 1 && contador == 105) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 1 && contador == 237) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 1 && contador == 285) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 2 && contador == 57) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 2 && contador == 102) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 2 && contador == 144) {
        digitalWrite(3, HIGH);
      }
      if (contador2 == 2 && contador == 282) {
        digitalWrite(3, LOW);
      }
      if (contador2 == 2 && contador == 318) {
        digitalWrite(3, HIGH);
      }
    }
    if (contador >= 348 && contador <= 366)
    {
      digitalWrite(11, HIGH);
    }
    if (contador >= 367)
    {
      cont_fusion = 1;
      contador = 0;
      contador2 = contador2 + 1;
      if (contador2 > 2) {
        contador2 = 1;
      }
    }
  }

  if (menu == 572)
  {

  }

  if (menu == 573)
  {

  }
}

////////////////Interrupciones Timer1/////////////////////


//////////////// Funciones del codigo/////////////////////

void teclado()
{
  botao = analogRead (0);  //Leitura do valor da porta analógica A0
  delay(30);
  if (botao < 50) {
    tecla = 1;
  }
  else if (botao > 50 && botao <= 170) {
    tecla = 2;
  }
  else if (botao > 170 && botao <= 320) {
    tecla = 3;
  }
  else if (botao > 320 && botao <= 540) {
    tecla = 4;
  }
  else if (botao > 540 && botao <= 900) {
    tecla = 5;
  }
  else if (botao <= 10) {
    tecla = 0;
  }

  return tecla;
}
void mainfunction()
{
  if (tecla == 4) {
    delay(250);
    lcd.clear();
    menu = 1;
    tecla = 0;
  }

  float potenciometro = analogRead(A1);
  delay(10);
  tensao_pot = ((5.0 / 1023.0) * (potenciometro) * 1000.0);
  rpm = 100.0 + tensao_pot;

  rps = rpm / 60.0;
  tempo = (1 / (72.0 * rps)) * 1000000.0;
  Timer1.setPeriod(tempo);
}

//////////////// Funciones del  codigo/////////////////////

void setup()
{
  lcd.begin(16, 2);

  pinMode(13, OUTPUT);         //Indutivo
  pinMode(12, OUTPUT);         //Indutivo
  pinMode(11, OUTPUT);         //Hall
  pinMode(3, OUTPUT);          //Fase

  lcd.setCursor(3, 0);
  lcd.print("GENERADOR");
  lcd.setCursor(2, 1);
  lcd.print(" CKP Y CMP");
  delay(2000);
  lcd.clear();

 

  lcd.setCursor(3, 0);
  lcd.print("Vislop.com");
  
 
  delay(3000);
  lcd.clear();

  Timer1.initialize(200000);
  Timer1.attachInterrupt(interrupcao);
}

void loop()
{
  ///////////////Menu principal/////////////

  while (menu == 1)
  {
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    digitalWrite(3, LOW);
    lcd.setCursor(0, 0);
    lcd.print("Basicos       ->");
    lcd.setCursor(0, 1);
    lcd.print("Sincronicos");

    teclado();

    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 100;
      tecla = 0;
    }
    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 2;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 2;
      tecla = 0;
    }
  }
  while (menu == 2)
  {
    lcd.setCursor(0, 0);
    lcd.print("Basicos");
    lcd.setCursor(0, 1);
    lcd.print("Sincronicos   ->");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 1;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 1;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 500;
      tecla = 0;
    }
  }

  ///////////////Menu principal/////////////

  //////////////Menu Basicos////////////////

  while (menu == 100)
  {
    lcd.setCursor(0, 0);
    lcd.print("60-2(H/I)     ->");
    lcd.setCursor(0, 1);
    lcd.print("44-4(H/I)");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 105;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 101;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 110;
      tecla = 0;
    }
  }
  while (menu == 101)
  {
    lcd.setCursor(0, 0);
    lcd.print("60-2(H/I)");
    lcd.setCursor(0, 1);
    lcd.print("44-4(H/I)     ->");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 100;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 102;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 111;
      tecla = 0;
    }
  }
  while (menu == 102)
  {
    lcd.setCursor(0, 0);
    lcd.print("36-1(H/I)     ->");
    lcd.setCursor(0, 1);
    lcd.print("36-2(H/I)");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 101;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 103;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 112;
      tecla = 0;
    }
  }
  while (menu == 103)
  {
    lcd.setCursor(0, 0);
    lcd.print("36-1(H/I)");
    lcd.setCursor(0, 1);
    lcd.print("36-2(H/I)     ->");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 102;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 104;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 113;
      tecla = 0;
    }
  }
  while (menu == 104)
  {
    lcd.setCursor(0, 0);
    lcd.print("Crear (H/I)   ->");
    lcd.setCursor(0, 1);
    lcd.print("Distribuidor");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 103;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 105;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 114;
      tecla = 0;
    }
  }
  while (menu == 105)
  {
    lcd.setCursor(0, 0);
    lcd.print("Crear (H/I)");
    lcd.setCursor(0, 1);
    lcd.print("Distribuidor  ->");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 104;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 100;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 115;
      tecla = 0;
    }
  }

  //////////////Menu Basicos////////////////

  


  while (menu == 500)
  {
    lcd.setCursor(0, 0);
    lcd.print("Frontier(H)   ->");
    lcd.setCursor(0, 1);
    lcd.print("Amarok");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 521;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 501;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 550;
      tecla = 0;
    }
  }
  while (menu == 501)
  {
    lcd.setCursor(0, 0);
    lcd.print("Frontier");
    lcd.setCursor(0, 1);
    lcd.print("Amarok(H)     ->");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 500;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 503;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 551;
      tecla = 0;
    }
  }
  while (menu == 503)
  {
    lcd.setCursor(0, 0);
    lcd.print("Brava(H)      ->");
    lcd.setCursor(0, 1);
    lcd.print("L200");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 501;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 504;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 553;
      tecla = 0;
    }
  }
  while (menu == 504)
  {
    lcd.setCursor(0, 0);
    lcd.print("Brava");
    lcd.setCursor(0, 1);
    lcd.print("L200(H)       ->");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 503;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 505;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 554;
      tecla = 0;
    }
  }
  while (menu == 505)
  {
    lcd.setCursor(0, 0);
    lcd.print("Civic 1.6(H)  ->");
    lcd.setCursor(0, 1);
    lcd.print("Gol G5 1.0 8v");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 504;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 506;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 555;
      tecla = 0;
    }
  }
  while (menu == 506)
  {
    lcd.setCursor(0, 0);
    lcd.print("Civic 1.6");
    lcd.setCursor(0, 1);
    lcd.print("GolG5 1.0 8v(H)->");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 505;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 507;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 556;
      tecla = 0;
    }
  }
  while (menu == 507)
  {
    lcd.setCursor(0, 0);
    lcd.print("GolG61.012v(H)->");
    lcd.setCursor(0, 1);
    lcd.print("Onix 1.0");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 506;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 508;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 557;
      tecla = 0;
    }
  }
  while (menu == 508)
  {
    lcd.setCursor(0, 0);
    lcd.print("Gol G6 1.0 12v");
    lcd.setCursor(0, 1);
    lcd.print("Onix 1.0(H)   ->");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 507;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 509;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 558;
      tecla = 0;
    }
  }
  while (menu == 509)
  {
    lcd.setCursor(0, 0);
    lcd.print("Agile 1.4(H)  ->");
    lcd.setCursor(0, 1);
    lcd.print("Linea 1.8");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 508;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 510;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 559;
      tecla = 0;
    }
  }
  while (menu == 510)
  {
    lcd.setCursor(0, 0);
    lcd.print("Agile 1.4");
    lcd.setCursor(0, 1);
    lcd.print("Linea 1.8(H)  ->");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 509;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 511;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 560;
      tecla = 0;
    }
  }
  while (menu == 511)
  {
    lcd.setCursor(0, 0);
    lcd.print("March 1.0(H)  ->");
    lcd.setCursor(0, 1);
    lcd.print("Sentra 2.0");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 510;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 512;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 561;
      tecla = 0;
    }
  }
  while (menu == 512)
  {
    lcd.setCursor(0, 0);
    lcd.print("March 1.0");
    lcd.setCursor(0, 1);
    lcd.print("Sentra 2.0(H) ->");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 511;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 513;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 562;
      tecla = 0;
    }
  }
  while (menu == 513)
  {
    lcd.setCursor(0, 0);
    lcd.print("Ford KA 1.0(H)->");
    lcd.setCursor(0, 1);
    lcd.print("Tucson 2.0");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 512;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 514;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 563;
      tecla = 0;
    }
  }
  while (menu == 514)
  {
    lcd.setCursor(0, 0);
    lcd.print("Ford KA 1.0");
    lcd.setCursor(0, 1);
    lcd.print("Tucson 2.0(H) ->");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 513;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 515;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 564;
      tecla = 0;
    }
  }

  while (menu == 515)
  {
    lcd.setCursor(0, 0);
    lcd.print("Lancer 2.0(H) ->");
    lcd.setCursor(0, 1);
    lcd.print("Evoque 2.0");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 514;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 516;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 565;
      tecla = 0;
    }
  }
  while (menu == 516)
  {
    lcd.setCursor(0, 0);
    lcd.print("Lancer 2.0");
    lcd.setCursor(0, 1);
    lcd.print("Evoque 2.0(H) ->");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 515;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 300;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 566;
      tecla = 0;
    }
  }
  while (menu == 300)
  {
    lcd.setCursor(0, 0);
    lcd.print("PLD(H)        ->");
    lcd.setCursor(0, 1);
    lcd.print("Polo 1.6");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 516;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 517;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 301;
      tecla = 0;
    }
  }
  while (menu == 517)
  {
    lcd.setCursor(0, 0);
    lcd.print("PLD");
    lcd.setCursor(0, 1);
    lcd.print("Polo 1.6(H)   ->");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 300;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 518;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 567;
      tecla = 0;
    }
  }
  while (menu == 518)
  {
    lcd.setCursor(0, 0);
    lcd.print("Honda Fit(H)  ->");
    lcd.setCursor(0, 1);
    lcd.print("DodgeRam5.9");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 517;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 519;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 568;
      tecla = 0;
    }
  }
  while (menu == 519)
  {
    lcd.setCursor(0, 0);
    lcd.print("Honda Fit");
    lcd.setCursor(0, 1);
    lcd.print("DodgeRam5.9(H)->");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 518;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 520;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 569;
      tecla = 0;
    }
  }
  while (menu == 520)
  {
    lcd.setCursor(0, 0);
    lcd.print("Saveiro1.6 16v->");
    lcd.setCursor(0, 1);
    lcd.print("Fusion 2.0");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 519;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 521;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 570;
      tecla = 0;
    }
  }
  while (menu == 521)
  {
    lcd.setCursor(0, 0);
    lcd.print("Saveiro 1.6 16v");
    lcd.setCursor(0, 1);
    lcd.print("Fusion 2.0    ->");

    teclado();

    if (tecla == 2) {
      delay(250);
      lcd.clear();
      menu = 520;
      tecla = 0;
    }
    if (tecla == 3) {
      delay(250);
      lcd.clear();
      menu = 500;
      tecla = 0;
    }
    if (tecla == 5) {
      delay(250);
      lcd.clear();
      menu = 571;
      tecla = 0;
    }
  }
  while (menu == 522)
  {

  }
  while (menu == 523)
  {

  }
  /////////////Menu Sinais com Fase///////////////

  /////////////Sinais Menu Basicos//////////////

  while (menu == 110)
  {
    lcd.setCursor(0, 0);
    lcd.print("60-2-> ");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(7, 0);
      lcd.print("0");
      lcd.setCursor(8, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(7, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    if (tecla == 4) {
      delay(250);
      lcd.clear();
      menu = 1;
      tecla = 0;
    }

    float potenciometro = analogRead(A1);
    delay(30);
    tensao_pot = ((5.0 / 1023.0) * (potenciometro) * 1000.0);
    rpm = 100.0 + tensao_pot;

    rps = rpm / 60.0;
    tempo = (1 / (120.0 * rps)) * 1000000.0;
    Timer1.setPeriod(tempo);
  }

  while (menu == 111)
  {
    lcd.setCursor(0, 0);
    lcd.print("44-4-> ");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(7, 0);
      lcd.print("0");
      lcd.setCursor(8, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(7, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    if (tecla == 4) {
      delay(250);
      lcd.clear();
      menu = 1;
      tecla = 0;
    }

    float potenciometro = analogRead(A1);
    delay(30);
    tensao_pot = ((5.0 / 1023.0) * (potenciometro) * 1000.0);
    rpm = 100.0 + tensao_pot;

    rps = rpm / 60.0;
    tempo = (1 / (88.0 * rps)) * 1000000.0;
    Timer1.setPeriod(tempo);
  }

  while (menu == 112)
  {
    lcd.setCursor(0, 0);
    lcd.print("36-1-> ");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(7, 0);
      lcd.print("0");
      lcd.setCursor(8, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(7, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    if (tecla == 4) {
      delay(250);
      lcd.clear();
      menu = 1;
      tecla = 0;
    }

    float potenciometro = analogRead(A1);
    delay(30);
    tensao_pot = ((5.0 / 1023.0) * (potenciometro) * 1000.0);
    rpm = 100.0 + tensao_pot;

    rps = rpm / 60.0;
    tempo = (1 / (72.0 * rps)) * 1000000.0;
    Timer1.setPeriod(tempo);
  }

  while (menu == 113)
  {
    lcd.setCursor(0, 0);
    lcd.print("36-2-> ");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(7, 0);
      lcd.print("0");
      lcd.setCursor(8, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(7, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    if (tecla == 4) {
      delay(250);
      lcd.clear();
      menu = 1;
      tecla = 0;
    }

    float potenciometro = analogRead(A1);
    delay(30);
    tensao_pot = ((5.0 / 1023.0) * (potenciometro) * 1000.0);
    rpm = 100.0 + tensao_pot;

    rps = rpm / 60.0;
    tempo = (1 / (72.0 * rps)) * 1000000.0;
    Timer1.setPeriod(tempo);
  }

  while (menu == 115)
  {
    lcd.setCursor(0, 0);
    lcd.print("Distrib-> ");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(10, 0);
      lcd.print("0");
      lcd.setCursor(11, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(10, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    if (tecla == 4) {
      delay(250);
      lcd.clear();
      menu = 1;
      tecla = 0;
    }

    float potenciometro = analogRead(A1);
    delay(30);
    tensao_pot = ((5.0 / 1023.0) * (potenciometro) * 1000.0);
    rpm = 10.0 + tensao_pot;

    rps = rpm;
    tempo = (1000 / (rps)) * 1000000.0;
    Timer1.setPeriod(tempo);
  }

  while (menu == 114)
  {
    lcd.setCursor(0, 0);
    lcd.print("-dientes||espacios-");
    lcd.setCursor(2, 1);
    lcd.print("<");
    lcd.setCursor(3, 1);
    lcd.print(dientes);
    lcd.setCursor(5, 1);
    lcd.print(">");

    lcd.setCursor(10, 1);
    lcd.print("<");
    lcd.setCursor(13, 1);
    lcd.print(">");
    lcd.setCursor(11, 1);
    lcd.print(espacios);

    teclado();

    if (tecla == 1)
    {
      delay(150);
      lcd.clear();
      dientes = dientes + 1;
      if (dientes > 60) {
        dientes = 1;
      }
      tecla = 0;
    }
    if (tecla == 4)
    {
      delay(150);
      lcd.clear();
      dientes = dientes - 1;
      if (dientes < 1) {
        dientes = 60;
      }
      tecla = 0;
    }
    if (tecla == 5)
    {
      delay(250);
      lcd.clear();
      menu = 116;
      tecla = 0;
    }
  }

  while (menu == 116)
  {
    lcd.setCursor(0, 0);
    lcd.print("dientes||espacios");
    lcd.setCursor(2, 1);
    lcd.print("<");
    lcd.setCursor(3, 1);
    lcd.print(dientes);
    lcd.setCursor(5, 1);
    lcd.print(">");

    lcd.setCursor(10, 1);
    lcd.print("<");
    lcd.setCursor(13, 1);
    lcd.print(">");
    lcd.setCursor(11, 1);
    lcd.print(espacios);

    teclado();

    if (tecla == 1)
    {
      delay(150);
      lcd.clear();
      espacios = espacios + 1;
      if (espacios > dientes) {
        espacios = 1;
      }
      tecla = 0;
    }
    if (tecla == 4)
    {
      delay(150);
      lcd.clear();
      espacios = espacios - 1;
      if (espacios < 1) {
        espacios = dientes;
      }
      tecla = 0;
    }
    if (tecla == 5)
    {
      delay(250);
      lcd.clear();
      menu = 117;
      tecla = 0;
    }
  }

  while (menu == 117)
  {
    lcd.setCursor(0, 0);
    lcd.print(dientes);
    lcd.setCursor(2, 0);
    lcd.print("-");
    lcd.setCursor(3, 0);
    lcd.print(espacios);
    lcd.print("->");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(7, 0);
      lcd.print("0");
      lcd.setCursor(8, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(7, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    if (tecla == 4) {
      delay(250);
      lcd.clear();
      menu = 1;
      tecla = 0;
    }

    float potenciometro = analogRead(A1);
    delay(30);
    tensao_pot = ((5.0 / 1023.0) * (potenciometro) * 1000.0);
    rpm = 100.0 + tensao_pot;

    rps = rpm / 60.0;
    tempo = (1 / (72.0 * rps)) * 1000000.0;
    Timer1.setPeriod(tempo);
  }

  /////////////Sinais Menu Basicos//////////////

  /////////////Sinais Diesel////////////////////

  while (menu == 301)
  {
    lcd.setCursor(0, 0);
    lcd.print("PLD ->");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(7, 0);
      lcd.print("0");
      lcd.setCursor(8, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(7, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    if (tecla == 4) {
      delay(250);
      lcd.clear();
      menu = 1;
      tecla = 0;
    }

    float potenciometro = analogRead(A1);
    delay(30);
    tensao_pot = ((5.0 / 1023.0) * (potenciometro) * 1000.0);
    rpm = 100.0 + tensao_pot;

    rps = rpm / 60.0;
    tempo = (1 / (72.0 * rps)) * 1000000.0;
    Timer1.setPeriod(tempo);
  }
  /////////////Sinais Diesel////////////////////

  /////////////Sinais com Fase//////////////////
  while (menu == 550)
  {
    lcd.setCursor(0, 0);
    lcd.print("Frontier->");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(11, 0);
      lcd.print("0");
      lcd.setCursor(12, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(11, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    mainfunction();
  }
  while (menu == 551)
  {
    lcd.setCursor(0, 0);
    lcd.print("Amarok ->");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(11, 0);
      lcd.print("0");
      lcd.setCursor(12, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(11, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    mainfunction();
  }
  while (menu == 553)
  {
    lcd.setCursor(0, 0);
    lcd.print("Brava ->");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(9, 0);
      lcd.print("0");
      lcd.setCursor(10, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(9, 0);
      lcd.print(rpm, 0);
    }

    mainfunction();
    teclado();
  }
  while (menu == 554)
  {
    lcd.setCursor(0, 0);
    lcd.print("L200 ->");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(8, 0);
      lcd.print("0");
      lcd.setCursor(9, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(8, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    mainfunction();
  }
  while (menu == 555)
  {
    lcd.setCursor(0, 0);
    lcd.print("Civic 1.6->");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(11, 0);
      lcd.print("0");
      lcd.setCursor(12, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(11, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    mainfunction();
  }

  while (menu == 556)
  {
    lcd.setCursor(0, 0);
    lcd.print("Gol G5 1.0->");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(12, 0);
      lcd.print("0");
      lcd.setCursor(13, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(12, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    mainfunction();
  }

  while (menu == 557)
  {
    lcd.setCursor(0, 0);
    lcd.print("Gol G6 1.0->");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(12, 0);
      lcd.print("0");
      lcd.setCursor(13, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(12, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    mainfunction();
  }

  while (menu == 558)
  {
    lcd.setCursor(0, 0);
    lcd.print("Onix 1.0 ->");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(12, 0);
      lcd.print("0");
      lcd.setCursor(13, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(12, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    mainfunction();
  }
  while (menu == 559)
  {
    lcd.setCursor(0, 0);
    lcd.print("Agile 1.4 ->");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(12, 0);
      lcd.print("0");
      lcd.setCursor(13, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(12, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    mainfunction();
  }
  while (menu == 560)
  {
    lcd.setCursor(0, 0);
    lcd.print("Linea 1.8 ->");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(12, 0);
      lcd.print("0");
      lcd.setCursor(13, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(12, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    mainfunction();
  }
  while (menu == 561)
  {
    lcd.setCursor(0, 0);
    lcd.print("March 1.0->");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(12, 0);
      lcd.print("0");
      lcd.setCursor(13, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(12, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    mainfunction();
  }

  while (menu == 562)
  {
    lcd.setCursor(0, 0);
    lcd.print("Sentra 2.0->");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(12, 0);
      lcd.print("0");
      lcd.setCursor(13, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(12, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    mainfunction();
  }
  while (menu == 563)
  {
    lcd.setCursor(0, 0);
    lcd.print("For KA 1.0->");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(12, 0);
      lcd.print("0");
      lcd.setCursor(13, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(12, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    mainfunction();
  }
  while (menu == 564)
  {
    lcd.setCursor(0, 0);
    lcd.print("Tucson 2.0->");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(12, 0);
      lcd.print("0");
      lcd.setCursor(13, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(12, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    mainfunction();
  }
  while (menu == 565)
  {
    lcd.setCursor(0, 0);
    lcd.print("Lancer 2.0->");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(12, 0);
      lcd.print("0");
      lcd.setCursor(13, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(12, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    mainfunction();
  }
  while (menu == 566)
  {
    lcd.setCursor(0, 0);
    lcd.print("Evoque 2.0->");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(12, 0);
      lcd.print("0");
      lcd.setCursor(13, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(12, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    mainfunction();
  }
  while (menu == 301)
  {
    lcd.setCursor(0, 0);
    lcd.print("PLD ->");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(7, 0);
      lcd.print("0");
      lcd.setCursor(8, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(7, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    mainfunction();
  }
  while (menu == 567)
  {
    lcd.setCursor(0, 0);
    lcd.print("Polo 1.6 ->");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(12, 0);
      lcd.print("0");
      lcd.setCursor(13, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(12, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    mainfunction();
  }
  while (menu == 568)
  {
    lcd.setCursor(0, 0);
    lcd.print("Honda Fit->");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(12, 0);
      lcd.print("0");
      lcd.setCursor(13, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(12, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    mainfunction();
  }
  while (menu == 569)
  {
    lcd.setCursor(0, 0);
    lcd.print("DodRam5.9->");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(12, 0);
      lcd.print("0");
      lcd.setCursor(13, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(12, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    mainfunction();
  }
  while (menu == 570)
  {
    lcd.setCursor(0, 0);
    lcd.print("Saveiro1.6->");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(12, 0);
      lcd.print("0");
      lcd.setCursor(13, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(12, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    mainfunction();
  }
  while (menu == 571)
  {
    lcd.setCursor(0, 0);
    lcd.print("Fusion 2.0->");
    lcd.setCursor(0, 1);
    lcd.print("Simulando....");

    if (rpm < 1000) {
      lcd.setCursor(12, 0);
      lcd.print("0");
      lcd.setCursor(13, 0);
      lcd.print(rpm, 0);
    }
    else {
      lcd.setCursor(12, 0);
      lcd.print(rpm, 0);
    }

    teclado();
    mainfunction();
  }
  while (menu == 572)
  {

  }
  while (menu == 573)
  {

  }
}
