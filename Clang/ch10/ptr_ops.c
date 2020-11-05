// ptr_ops.c -- ����樨 ��� 㪠��⥫ﬨ
#include <stdio.h>
int main(void)
{
	int urn[5] = {100,200,300,400,500};
	int *ptr1, *ptr2, *ptr3;
	ptr1 = urn;
	ptr2 = &urn[2];
	
	printf("���祭�� 㪠��⥫�, ࠧ묥������� 㪠��⥫�, ���� 㪠��⥫�:\n");
	
	// ࠧ묥������� 㪠��⥫�, ���⨥ ���� 㪠��⥫�
	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
	
	// ᫮����� 㪠��⥫��
	ptr3 = ptr1 + 4;
	printf("\n᫮����� ���祭�� int � 㪠��⥫��:\n");
	printf("ptr1 + 4 = %p, *(ptr1 + 3) = %d\n", ptr1 + 4, *(ptr1 + 3));
	
	// 㢥��祭�� ���祭�� 㪠��⥫� �� 1
	ptr1++;
	printf("\n���祭�� ��᫥ �믮������ ����樨 ptr1++:\n");
	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p", ptr1, *ptr1, &ptr1);
	
	// 㬥��襭�� ���祭�� 㪠��⥫� �� 1
	ptr2--;
	printf("\n���祭�� ��᫥ �믮������ ����樨 ptr2--:\n");
	printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p", ptr2, *ptr2, &ptr2);
		
	// ����⠭������� ��室���� ���祭��
	--ptr1;
	++ptr2;
	printf("\n����⠭������� ��室��� ���祭�� 㪠��⥫��\n");
	printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);
	
	// ���⠭�� ������ 㪠��⥫� �� ��㣮��
	printf("\n���⠭�� ������ 㪠��⥫� �� ��㣮��\n");
	printf("ptr2 = %p, ptr1 = %p, ptr2-ptr1 = %d\n", ptr2, ptr1, ptr2-ptr1);
	
	// ���⠭�� 楫��� ���祭�� �� 㪠��⥫�
	printf("\n���⠭�� �� 㪠��⥫� ���祭�� ⨯� int:\n");
	printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3-2);
	
	return 0;
}