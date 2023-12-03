# smart_home_system_ardunio
it has written with ardunio

Projeye ait detaylı bilgiye Rapor(1).pdf dosyasından ulaşabilirsiniz

2-Giriş
Bu projede bizden istenen proteus
programında ile ardunio üzerinde çalışan bir
akıllı ev simülasyonu yapmamızdır. Projede
proteus programında Ardunio mega 2560 V2
kullanarak akıllı ev sistemi oluşturmamız
istenmiştir. Bu akıllı ev sistemi içerisinde
yangın alarmı, hareket algılayan ışık
sensörü,dijital termometre ve kilit sitemi
bulunmalıdır. Ardunio kartı olarak Ardunio
Mega 2560 V2 kullanmamız istenmiştir.
Yangın sensörü ve buzzer kullanılarak yangın
tespit edildiğinde alarm çalması istenmiştir.
Hareket sensörü ve lamba kullanılarak hareket
tespit edildiği zaman lambanın yanması
istenmiştir. Sıcaklık sensörü ve LCD ekran
kullanılarak algılanan sıcaklığın devamlı olarak
LCD ekranda gösterilmesi istenmiştir ve
sıcaklık 20 C’nin altına düştüğünde ekrana
“Sıcaklık düştü”, 30 C’nin üstüne çıktığında
“Sıcaklık yükseldi” yazdırılması istenmiştir.
Tuş takımı ve kızmızı-yeşil led kullanılarak
Keypad ile girilecek 4 haneli bir şifre belirlenip
şifre yanlış girildiğinde kırmızı, doğru
girildiğinde ise yeşil ledin yanması
istenmektedir.

A-Başlangıç
Öncelikle bizden istenen kütüphaneleri
araştırıp proteus programında olmayan
kütüphaneleri internet üzerinden indirip
proteus programının içerisine aktardım.
Sonrasında proteus programı üzerinden
bizden istenen devre elemanlarını kullanarak
akıllı ev sistemini devreye aktardım.
Kullanmamız istenen devre elemanlarını
Ardunio mega 2560 V2 kartı ile bağlantılarını
yaptım.
B-İlerleyiş
Proteus programında devreyi çizdikten sonra
kod yazma aşamasına geçtim. Benden istenen
4 ister için ihtiyacım olan kütüphaneleri
ekledim. Bu kütüphaneler içerisinden
#include<Keypad.h> kütüphanesini ekledim.
Sonrasında kullandığım değişkenlerin tipini,
değerlerini ve Ardunio mega 2560 V2 kartında
bağlı oldukları giriş-çıkış noktalarını yazdım.
Keypad için bağlantıları ve gerekli
düzenlemeleri yaptım.
Void setup() fonksiyonu içerisinde kullandığım
değişkenlerin ve devrede kullandığım devre
elemanlarının INPUT veya OUTPUT olduğunu
belirttim.
Void loop() fonksiyonu içerisinde yangın
alarmı, hareket algılayan ışık sensörü,dijital
termometre ve kilit siteminin çalışmasını
sağlayan kodları yazdım.
void clearData() fonksiyonu içerisinde ise
temizleme işlemlerini yaptım. return; ile de
başa dönmeyi sağladım.




