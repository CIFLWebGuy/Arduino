void displayCharacter(int position, char code)
{  
  byte* data = GetCharacterData(code);
  
  for (int i = 0; i < 7; i++)
  {
    display.setRow(position, i, *(data + i));
  }
}

// This is the character data for the 5x7 font used by the HD44780U display driver.
// It contains the characters in the ASCII range (33 - 127).
byte[] GetCharacterData(int code)
{
	byte[7] data;

	switch(code)
	{
		case 33:	 // Character: !
			data[0] = 0x08;
			data[1] = 0x08;
			data[2] = 0x08;
			data[3] = 0x08;
			data[4] = 0x00;
			data[5] = 0x00;
			data[6] = 0x08;
			data[7] = 0x00;
			break;

		case 34:	 // Character: "
			data[0] = 0x14;
			data[1] = 0x14;
			data[2] = 0x14;
			data[3] = 0x00;
			data[4] = 0x00;
			data[5] = 0x00;
			data[6] = 0x00;
			data[7] = 0x00;
			break;

		case 35:	 // Character: #
			data[0] = 0x14;
			data[1] = 0x14;
			data[2] = 0x3E;
			data[3] = 0x14;
			data[4] = 0x3E;
			data[5] = 0x14;
			data[6] = 0x14;
			data[7] = 0x00;
			break;

		case 36:	 // Character: $
			data[0] = 0x08;
			data[1] = 0x1E;
			data[2] = 0x28;
			data[3] = 0x1C;
			data[4] = 0x0A;
			data[5] = 0x3C;
			data[6] = 0x08;
			data[7] = 0x00;
			break;

		case 37:	 // Character: %
			data[0] = 0x30;
			data[1] = 0x32;
			data[2] = 0x04;
			data[3] = 0x08;
			data[4] = 0x10;
			data[5] = 0x26;
			data[6] = 0x06;
			data[7] = 0x00;
			break;

		case 38:	 // Character: &
			data[0] = 0x18;
			data[1] = 0x24;
			data[2] = 0x28;
			data[3] = 0x10;
			data[4] = 0x2A;
			data[5] = 0x24;
			data[6] = 0x1A;
			data[7] = 0x00;
			break;

		case 39:	 // Character: '
			data[0] = 0x18;
			data[1] = 0x08;
			data[2] = 0x10;
			data[3] = 0x00;
			data[4] = 0x00;
			data[5] = 0x00;
			data[6] = 0x00;
			data[7] = 0x00;
			break;

		case 40:	 // Character: (
			data[0] = 0x04;
			data[1] = 0x08;
			data[2] = 0x10;
			data[3] = 0x10;
			data[4] = 0x10;
			data[5] = 0x08;
			data[6] = 0x04;
			data[7] = 0x00;
			break;

		case 41:	 // Character: )
			data[0] = 0x10;
			data[1] = 0x08;
			data[2] = 0x04;
			data[3] = 0x04;
			data[4] = 0x04;
			data[5] = 0x08;
			data[6] = 0x10;
			data[7] = 0x00;
			break;

		case 42:	 // Character: *
			data[0] = 0x00;
			data[1] = 0x08;
			data[2] = 0x2A;
			data[3] = 0x1C;
			data[4] = 0x2A;
			data[5] = 0x08;
			data[6] = 0x00;
			data[7] = 0x00;
			break;

		case 43:	 // Character: +
			data[0] = 0x00;
			data[1] = 0x08;
			data[2] = 0x08;
			data[3] = 0x3E;
			data[4] = 0x08;
			data[5] = 0x08;
			data[6] = 0x00;
			data[7] = 0x00;
			break;

		case 44:	 // Character: ,
			data[0] = 0x00;
			data[1] = 0x00;
			data[2] = 0x00;
			data[3] = 0x00;
			data[4] = 0x18;
			data[5] = 0x08;
			data[6] = 0x10;
			data[7] = 0x00;
			break;

		case 45:	 // Character: -
			data[0] = 0x00;
			data[1] = 0x00;
			data[2] = 0x00;
			data[3] = 0x3E;
			data[4] = 0x00;
			data[5] = 0x00;
			data[6] = 0x00;
			data[7] = 0x00;
			break;

		case 46:	 // Character: .
			data[0] = 0x00;
			data[1] = 0x00;
			data[2] = 0x00;
			data[3] = 0x00;
			data[4] = 0x00;
			data[5] = 0x18;
			data[6] = 0x18;
			data[7] = 0x00;
			break;

		case 47:	 // Character: /
			data[0] = 0x00;
			data[1] = 0x02;
			data[2] = 0x04;
			data[3] = 0x08;
			data[4] = 0x10;
			data[5] = 0x20;
			data[6] = 0x00;
			data[7] = 0x00;
			break;

		case 48:	 // Character: 0
			data[0] = 0x1C;
			data[1] = 0x22;
			data[2] = 0x26;
			data[3] = 0x2A;
			data[4] = 0x32;
			data[5] = 0x22;
			data[6] = 0x1C;
			data[7] = 0x00;
			break;

		case 49:	 // Character: 1
			data[0] = 0x08;
			data[1] = 0x18;
			data[2] = 0x08;
			data[3] = 0x08;
			data[4] = 0x08;
			data[5] = 0x08;
			data[6] = 0x1C;
			data[7] = 0x00;
			break;

		case 50:	 // Character: 2
			data[0] = 0x1C;
			data[1] = 0x22;
			data[2] = 0x02;
			data[3] = 0x04;
			data[4] = 0x08;
			data[5] = 0x10;
			data[6] = 0x3E;
			data[7] = 0x00;
			break;

		case 51:	 // Character: 3
			data[0] = 0x3E;
			data[1] = 0x04;
			data[2] = 0x08;
			data[3] = 0x04;
			data[4] = 0x02;
			data[5] = 0x22;
			data[6] = 0x1C;
			data[7] = 0x00;
			break;

		case 52:	 // Character: 4
			data[0] = 0x04;
			data[1] = 0x0C;
			data[2] = 0x14;
			data[3] = 0x24;
			data[4] = 0x3E;
			data[5] = 0x04;
			data[6] = 0x04;
			data[7] = 0x00;
			break;

		case 53:	 // Character: 5
			data[0] = 0x3E;
			data[1] = 0x20;
			data[2] = 0x3C;
			data[3] = 0x02;
			data[4] = 0x02;
			data[5] = 0x22;
			data[6] = 0x1C;
			data[7] = 0x00;
			break;

		case 54:	 // Character: 6
			data[0] = 0x0C;
			data[1] = 0x10;
			data[2] = 0x20;
			data[3] = 0x3C;
			data[4] = 0x22;
			data[5] = 0x22;
			data[6] = 0x1C;
			data[7] = 0x00;
			break;

		case 55:	 // Character: 7
			data[0] = 0x3E;
			data[1] = 0x22;
			data[2] = 0x02;
			data[3] = 0x04;
			data[4] = 0x08;
			data[5] = 0x08;
			data[6] = 0x08;
			data[7] = 0x00;
			break;

		case 56:	 // Character: 8
			data[0] = 0x1C;
			data[1] = 0x22;
			data[2] = 0x22;
			data[3] = 0x1C;
			data[4] = 0x22;
			data[5] = 0x22;
			data[6] = 0x1C;
			data[7] = 0x00;
			break;

		case 57:	 // Character: 9
			data[0] = 0x1C;
			data[1] = 0x22;
			data[2] = 0x22;
			data[3] = 0x1E;
			data[4] = 0x02;
			data[5] = 0x04;
			data[6] = 0x18;
			data[7] = 0x00;
			break;

		case 58:	 // Character: :
			data[0] = 0x00;
			data[1] = 0x18;
			data[2] = 0x18;
			data[3] = 0x00;
			data[4] = 0x18;
			data[5] = 0x18;
			data[6] = 0x00;
			data[7] = 0x00;
			break;

		case 59:	 // Character: ;
			data[0] = 0x00;
			data[1] = 0x18;
			data[2] = 0x18;
			data[3] = 0x00;
			data[4] = 0x18;
			data[5] = 0x08;
			data[6] = 0x10;
			data[7] = 0x00;
			break;

		case 60:	 // Character: <
			data[0] = 0x04;
			data[1] = 0x08;
			data[2] = 0x10;
			data[3] = 0x20;
			data[4] = 0x10;
			data[5] = 0x08;
			data[6] = 0x04;
			data[7] = 0x00;
			break;

		case 61:	 // Character: =
			data[0] = 0x00;
			data[1] = 0x00;
			data[2] = 0x3E;
			data[3] = 0x00;
			data[4] = 0x3E;
			data[5] = 0x00;
			data[6] = 0x00;
			data[7] = 0x00;
			break;

		case 62:	 // Character: >
			data[0] = 0x10;
			data[1] = 0x08;
			data[2] = 0x04;
			data[3] = 0x02;
			data[4] = 0x04;
			data[5] = 0x08;
			data[6] = 0x10;
			data[7] = 0x00;
			break;

		case 63:	 // Character: ?
			data[0] = 0x1C;
			data[1] = 0x22;
			data[2] = 0x02;
			data[3] = 0x04;
			data[4] = 0x08;
			data[5] = 0x00;
			data[6] = 0x08;
			data[7] = 0x00;
			break;

		case 64:	 // Character: @
			data[0] = 0x1C;
			data[1] = 0x22;
			data[2] = 0x02;
			data[3] = 0x1A;
			data[4] = 0x2A;
			data[5] = 0x2A;
			data[6] = 0x1C;
			data[7] = 0x00;
			break;

		case 65:	 // Character: A
			data[0] = 0x1C;
			data[1] = 0x22;
			data[2] = 0x22;
			data[3] = 0x3E;
			data[4] = 0x22;
			data[5] = 0x22;
			data[6] = 0x22;
			data[7] = 0x00;
			break;

		case 66:	 // Character: B
			data[0] = 0x3C;
			data[1] = 0x22;
			data[2] = 0x22;
			data[3] = 0x3C;
			data[4] = 0x22;
			data[5] = 0x22;
			data[6] = 0x3C;
			data[7] = 0x00;
			break;

		case 67:	 // Character: C
			data[0] = 0x1C;
			data[1] = 0x22;
			data[2] = 0x20;
			data[3] = 0x20;
			data[4] = 0x20;
			data[5] = 0x22;
			data[6] = 0x1C;
			data[7] = 0x00;
			break;

		case 68:	 // Character: D
			data[0] = 0x38;
			data[1] = 0x24;
			data[2] = 0x22;
			data[3] = 0x22;
			data[4] = 0x22;
			data[5] = 0x24;
			data[6] = 0x38;
			data[7] = 0x00;
			break;

		case 69:	 // Character: E
			data[0] = 0x3E;
			data[1] = 0x20;
			data[2] = 0x20;
			data[3] = 0x3C;
			data[4] = 0x20;
			data[5] = 0x20;
			data[6] = 0x3E;
			data[7] = 0x00;
			break;

		case 70:	 // Character: F
			data[0] = 0x3E;
			data[1] = 0x20;
			data[2] = 0x20;
			data[3] = 0x3C;
			data[4] = 0x20;
			data[5] = 0x20;
			data[6] = 0x20;
			data[7] = 0x00;
			break;

		case 71:	 // Character: G
			data[0] = 0x1C;
			data[1] = 0x22;
			data[2] = 0x20;
			data[3] = 0x2E;
			data[4] = 0x22;
			data[5] = 0x22;
			data[6] = 0x1E;
			data[7] = 0x00;
			break;

		case 72:	 // Character: H
			data[0] = 0x22;
			data[1] = 0x22;
			data[2] = 0x22;
			data[3] = 0x3E;
			data[4] = 0x22;
			data[5] = 0x22;
			data[6] = 0x22;
			data[7] = 0x00;
			break;

		case 73:	 // Character: I
			data[0] = 0x1C;
			data[1] = 0x08;
			data[2] = 0x08;
			data[3] = 0x08;
			data[4] = 0x08;
			data[5] = 0x08;
			data[6] = 0x1C;
			data[7] = 0x00;
			break;

		case 74:	 // Character: J
			data[0] = 0x0E;
			data[1] = 0x04;
			data[2] = 0x04;
			data[3] = 0x04;
			data[4] = 0x04;
			data[5] = 0x24;
			data[6] = 0x18;
			data[7] = 0x00;
			break;

		case 75:	 // Character: K
			data[0] = 0x22;
			data[1] = 0x24;
			data[2] = 0x28;
			data[3] = 0x30;
			data[4] = 0x28;
			data[5] = 0x24;
			data[6] = 0x22;
			data[7] = 0x00;
			break;

		case 76:	 // Character: L
			data[0] = 0x20;
			data[1] = 0x20;
			data[2] = 0x20;
			data[3] = 0x20;
			data[4] = 0x20;
			data[5] = 0x20;
			data[6] = 0x3E;
			data[7] = 0x00;
			break;

		case 77:	 // Character: M
			data[0] = 0x22;
			data[1] = 0x36;
			data[2] = 0x2A;
			data[3] = 0x2A;
			data[4] = 0x22;
			data[5] = 0x22;
			data[6] = 0x22;
			data[7] = 0x00;
			break;

		case 78:	 // Character: N
			data[0] = 0x22;
			data[1] = 0x22;
			data[2] = 0x32;
			data[3] = 0x2A;
			data[4] = 0x26;
			data[5] = 0x22;
			data[6] = 0x22;
			data[7] = 0x00;
			break;

		case 79:	 // Character: O
			data[0] = 0x1C;
			data[1] = 0x22;
			data[2] = 0x22;
			data[3] = 0x22;
			data[4] = 0x22;
			data[5] = 0x22;
			data[6] = 0x1C;
			data[7] = 0x00;
			break;

		case 80:	 // Character: P
			data[0] = 0x3C;
			data[1] = 0x22;
			data[2] = 0x22;
			data[3] = 0x3C;
			data[4] = 0x20;
			data[5] = 0x20;
			data[6] = 0x20;
			data[7] = 0x00;
			break;

		case 81:	 // Character: Q
			data[0] = 0x1C;
			data[1] = 0x22;
			data[2] = 0x22;
			data[3] = 0x22;
			data[4] = 0x2A;
			data[5] = 0x24;
			data[6] = 0x1A;
			data[7] = 0x00;
			break;

		case 82:	 // Character: R
			data[0] = 0x3C;
			data[1] = 0x22;
			data[2] = 0x22;
			data[3] = 0x3C;
			data[4] = 0x28;
			data[5] = 0x24;
			data[6] = 0x22;
			data[7] = 0x00;
			break;

		case 83:	 // Character: S
			data[0] = 0x1C;
			data[1] = 0x22;
			data[2] = 0x20;
			data[3] = 0x1C;
			data[4] = 0x02;
			data[5] = 0x22;
			data[6] = 0x1C;
			data[7] = 0x00;
			break;

		case 84:	 // Character: T
			data[0] = 0x3E;
			data[1] = 0x08;
			data[2] = 0x08;
			data[3] = 0x08;
			data[4] = 0x08;
			data[5] = 0x08;
			data[6] = 0x08;
			data[7] = 0x00;
			break;

		case 85:	 // Character: U
			data[0] = 0x22;
			data[1] = 0x22;
			data[2] = 0x22;
			data[3] = 0x22;
			data[4] = 0x22;
			data[5] = 0x22;
			data[6] = 0x1C;
			data[7] = 0x00;
			break;

		case 86:	 // Character: V
			data[0] = 0x22;
			data[1] = 0x22;
			data[2] = 0x22;
			data[3] = 0x22;
			data[4] = 0x22;
			data[5] = 0x14;
			data[6] = 0x08;
			data[7] = 0x00;
			break;

		case 87:	 // Character: W
			data[0] = 0x22;
			data[1] = 0x22;
			data[2] = 0x22;
			data[3] = 0x2A;
			data[4] = 0x2A;
			data[5] = 0x2A;
			data[6] = 0x14;
			data[7] = 0x00;
			break;

		case 88:	 // Character: X
			data[0] = 0x22;
			data[1] = 0x22;
			data[2] = 0x14;
			data[3] = 0x08;
			data[4] = 0x14;
			data[5] = 0x22;
			data[6] = 0x22;
			data[7] = 0x00;
			break;

		case 89:	 // Character: Y
			data[0] = 0x22;
			data[1] = 0x22;
			data[2] = 0x22;
			data[3] = 0x14;
			data[4] = 0x08;
			data[5] = 0x08;
			data[6] = 0x08;
			data[7] = 0x00;
			break;

		case 90:	 // Character: Z
			data[0] = 0x3E;
			data[1] = 0x02;
			data[2] = 0x04;
			data[3] = 0x08;
			data[4] = 0x10;
			data[5] = 0x20;
			data[6] = 0x3E;
			data[7] = 0x00;
			break;

		case 91:	 // Character: [
			data[0] = 0x1C;
			data[1] = 0x10;
			data[2] = 0x10;
			data[3] = 0x10;
			data[4] = 0x10;
			data[5] = 0x10;
			data[6] = 0x1C;
			data[7] = 0x00;
			break;

		case 92:	 // Character: \
			data[0] = 0x00;
			data[1] = 0x20;
			data[2] = 0x10;
			data[3] = 0x08;
			data[4] = 0x04;
			data[5] = 0x02;
			data[6] = 0x00;
			data[7] = 0x00;
			break;

		case 93:	 // Character: ]
			data[0] = 0x1C;
			data[1] = 0x04;
			data[2] = 0x04;
			data[3] = 0x04;
			data[4] = 0x04;
			data[5] = 0x04;
			data[6] = 0x1C;
			data[7] = 0x00;
			break;

		case 94:	 // Character: ^
			data[0] = 0x08;
			data[1] = 0x14;
			data[2] = 0x22;
			data[3] = 0x00;
			data[4] = 0x00;
			data[5] = 0x00;
			data[6] = 0x00;
			data[7] = 0x00;
			break;

		case 95:	 // Character: _
			data[0] = 0x00;
			data[1] = 0x00;
			data[2] = 0x00;
			data[3] = 0x00;
			data[4] = 0x00;
			data[5] = 0x00;
			data[6] = 0x3E;
			data[7] = 0x00;
			break;

		case 96:	 // Character: `
			data[0] = 0x10;
			data[1] = 0x08;
			data[2] = 0x04;
			data[3] = 0x00;
			data[4] = 0x00;
			data[5] = 0x00;
			data[6] = 0x00;
			data[7] = 0x00;
			break;

		case 97:	 // Character: a
			data[0] = 0x00;
			data[1] = 0x00;
			data[2] = 0x1C;
			data[3] = 0x02;
			data[4] = 0x1E;
			data[5] = 0x22;
			data[6] = 0x1E;
			data[7] = 0x00;
			break;

		case 98:	 // Character: b
			data[0] = 0x20;
			data[1] = 0x20;
			data[2] = 0x2C;
			data[3] = 0x32;
			data[4] = 0x22;
			data[5] = 0x22;
			data[6] = 0x3C;
			data[7] = 0x00;
			break;

		case 99:	 // Character: c
			data[0] = 0x00;
			data[1] = 0x00;
			data[2] = 0x1C;
			data[3] = 0x20;
			data[4] = 0x20;
			data[5] = 0x22;
			data[6] = 0x1C;
			data[7] = 0x00;
			break;

		case 100:	 // Character: d
			data[0] = 0x02;
			data[1] = 0x02;
			data[2] = 0x1A;
			data[3] = 0x26;
			data[4] = 0x22;
			data[5] = 0x22;
			data[6] = 0x1E;
			data[7] = 0x00;
			break;

		case 101:	 // Character: e
			data[0] = 0x00;
			data[1] = 0x00;
			data[2] = 0x1C;
			data[3] = 0x22;
			data[4] = 0x3E;
			data[5] = 0x20;
			data[6] = 0x1C;
			data[7] = 0x00;
			break;

		case 102:	 // Character: f
			data[0] = 0x0C;
			data[1] = 0x12;
			data[2] = 0x10;
			data[3] = 0x38;
			data[4] = 0x10;
			data[5] = 0x10;
			data[6] = 0x10;
			data[7] = 0x00;
			break;

		case 103:	 // Character: g
			data[0] = 0x00;
			data[1] = 0x00;
			data[2] = 0x1E;
			data[3] = 0x22;
			data[4] = 0x1E;
			data[5] = 0x02;
			data[6] = 0x1C;
			data[7] = 0x00;
			break;

		case 104:	 // Character: h
			data[0] = 0x20;
			data[1] = 0x20;
			data[2] = 0x2C;
			data[3] = 0x32;
			data[4] = 0x22;
			data[5] = 0x22;
			data[6] = 0x22;
			data[7] = 0x00;
			break;

		case 105:	 // Character: i
			data[0] = 0x08;
			data[1] = 0x00;
			data[2] = 0x08;
			data[3] = 0x18;
			data[4] = 0x08;
			data[5] = 0x08;
			data[6] = 0x1C;
			data[7] = 0x00;
			break;

		case 106:	 // Character: j
			data[0] = 0x04;
			data[1] = 0x00;
			data[2] = 0x0C;
			data[3] = 0x04;
			data[4] = 0x04;
			data[5] = 0x24;
			data[6] = 0x18;
			data[7] = 0x00;
			break;

		case 107:	 // Character: k
			data[0] = 0x20;
			data[1] = 0x20;
			data[2] = 0x24;
			data[3] = 0x28;
			data[4] = 0x30;
			data[5] = 0x28;
			data[6] = 0x24;
			data[7] = 0x00;
			break;

		case 108:	 // Character: l
			data[0] = 0x18;
			data[1] = 0x08;
			data[2] = 0x08;
			data[3] = 0x08;
			data[4] = 0x08;
			data[5] = 0x08;
			data[6] = 0x1C;
			data[7] = 0x00;
			break;

		case 109:	 // Character: m
			data[0] = 0x00;
			data[1] = 0x00;
			data[2] = 0x36;
			data[3] = 0x2A;
			data[4] = 0x2A;
			data[5] = 0x2A;
			data[6] = 0x2A;
			data[7] = 0x00;
			break;

		case 110:	 // Character: n
			data[0] = 0x00;
			data[1] = 0x00;
			data[2] = 0x2C;
			data[3] = 0x32;
			data[4] = 0x22;
			data[5] = 0x22;
			data[6] = 0x22;
			data[7] = 0x00;
			break;

		case 111:	 // Character: o
			data[0] = 0x00;
			data[1] = 0x00;
			data[2] = 0x1C;
			data[3] = 0x22;
			data[4] = 0x22;
			data[5] = 0x22;
			data[6] = 0x1C;
			data[7] = 0x00;
			break;

		case 112:	 // Character: p
			data[0] = 0x00;
			data[1] = 0x00;
			data[2] = 0x3C;
			data[3] = 0x22;
			data[4] = 0x3C;
			data[5] = 0x20;
			data[6] = 0x20;
			data[7] = 0x00;
			break;

		case 113:	 // Character: q
			data[0] = 0x00;
			data[1] = 0x00;
			data[2] = 0x1A;
			data[3] = 0x26;
			data[4] = 0x1E;
			data[5] = 0x02;
			data[6] = 0x02;
			data[7] = 0x00;
			break;

		case 114:	 // Character: r
			data[0] = 0x00;
			data[1] = 0x00;
			data[2] = 0x2C;
			data[3] = 0x32;
			data[4] = 0x20;
			data[5] = 0x20;
			data[6] = 0x20;
			data[7] = 0x00;
			break;

		case 115:	 // Character: s
			data[0] = 0x00;
			data[1] = 0x00;
			data[2] = 0x1C;
			data[3] = 0x20;
			data[4] = 0x1C;
			data[5] = 0x02;
			data[6] = 0x3C;
			data[7] = 0x00;
			break;

		case 116:	 // Character: t
			data[0] = 0x10;
			data[1] = 0x10;
			data[2] = 0x38;
			data[3] = 0x10;
			data[4] = 0x10;
			data[5] = 0x12;
			data[6] = 0x0C;
			data[7] = 0x00;
			break;

		case 117:	 // Character: u
			data[0] = 0x00;
			data[1] = 0x00;
			data[2] = 0x22;
			data[3] = 0x22;
			data[4] = 0x22;
			data[5] = 0x26;
			data[6] = 0x1A;
			data[7] = 0x00;
			break;

		case 118:	 // Character: v
			data[0] = 0x00;
			data[1] = 0x00;
			data[2] = 0x22;
			data[3] = 0x22;
			data[4] = 0x22;
			data[5] = 0x14;
			data[6] = 0x08;
			data[7] = 0x00;
			break;

		case 119:	 // Character: w
			data[0] = 0x00;
			data[1] = 0x00;
			data[2] = 0x22;
			data[3] = 0x22;
			data[4] = 0x2A;
			data[5] = 0x2A;
			data[6] = 0x14;
			data[7] = 0x00;
			break;

		case 120:	 // Character: x
			data[0] = 0x00;
			data[1] = 0x00;
			data[2] = 0x22;
			data[3] = 0x14;
			data[4] = 0x08;
			data[5] = 0x14;
			data[6] = 0x22;
			data[7] = 0x00;
			break;

		case 121:	 // Character: y
			data[0] = 0x00;
			data[1] = 0x00;
			data[2] = 0x22;
			data[3] = 0x22;
			data[4] = 0x1E;
			data[5] = 0x02;
			data[6] = 0x1C;
			data[7] = 0x00;
			break;

		case 122:	 // Character: z
			data[0] = 0x00;
			data[1] = 0x00;
			data[2] = 0x3E;
			data[3] = 0x04;
			data[4] = 0x08;
			data[5] = 0x10;
			data[6] = 0x3E;
			data[7] = 0x00;
			break;

		case 123:	 // Character: {
			data[0] = 0x04;
			data[1] = 0x08;
			data[2] = 0x08;
			data[3] = 0x10;
			data[4] = 0x08;
			data[5] = 0x08;
			data[6] = 0x04;
			data[7] = 0x00;
			break;

		case 124:	 // Character: |
			data[0] = 0x08;
			data[1] = 0x08;
			data[2] = 0x08;
			data[3] = 0x08;
			data[4] = 0x08;
			data[5] = 0x08;
			data[6] = 0x08;
			data[7] = 0x00;
			break;

		case 125:	 // Character: }
			data[0] = 0x10;
			data[1] = 0x08;
			data[2] = 0x08;
			data[3] = 0x04;
			data[4] = 0x08;
			data[5] = 0x08;
			data[6] = 0x10;
			data[7] = 0x00;
			break;

		case 126:	 // Character: ~
			data[0] = 0x00;
			data[1] = 0x00;
			data[2] = 0x1A;
			data[3] = 0x24;
			data[4] = 0x00;
			data[5] = 0x00;
			data[6] = 0x00;
			data[7] = 0x00;
			break;

		case 127:	 // Character: 
			data[0] = 0x08;
			data[1] = 0x14;
			data[2] = 0x22;
			data[3] = 0x22;
			data[4] = 0x22;
			data[5] = 0x22;
			data[6] = 0x3E;
			data[7] = 0x00;
			break;

		default:	// invalid code
			data[i] = 0;
			data[i] = 0;
			data[i] = 0;
			data[i] = 0;
			data[i] = 0;
			data[i] = 0;
			data[i] = 0;
			data[i] = 0;
			break;
	}

	 return data;
}

