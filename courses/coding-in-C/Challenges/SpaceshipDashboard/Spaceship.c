#include <stdio.h>
char Klasse [];
int Besatzung;
int Tage;
long long km = 67182438;
float lichtv = 15.3;
float Reichweite = 34678.374;

int main() {
    printf("Klasse des Schiffs: ");
    scanf("%s", Klasse);
    printf("Anzahl der Crew: ");
    scanf("%d", &Besatzung);
    printf("Anzahl der Missionstage: ");
    scanf("%d", &Tage);
    printf("\n\n\n");
    printf("%-30s\n\n", "Dashboard");
    printf("%-30s %s\n", "Klasse:", Klasse);
    printf("%-30s %d\n", "Besatzung:", Besatzung);
    printf("%-30s %d\n", "Missionstage:", Tage);
    printf("%-30s %lld\n", "km zurueckgelegt:", km);
    printf("%-30s %.1f\n", "%%zurueckgelegte Lichtgeschw.:", lichtv);
    printf("%-30s %.3f\n", "Aktuelle Reichweite:", Reichweite);
}