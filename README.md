# Tinkercad ile Arduino Programlama Projesi
Bu proje, Arduino ile birçok faaliyeti ;
- LED yakma
- Servomotor kontrolü
- Mesafe sensörü ile mesafe ölçümü
- Alarm sistemi
- Diğer sensörler (örneğin, sıcaklık sensörü, ışık sensörü vb.)
  
gerçekleştirmek ve sizlere aktarmak  için oluşturulmuştur.

## Başlangıç

Bu projeyi çalıştırabilmek için aşağıdaki adımları takip edin.

### Gereksinimler

- Arduino UNO (veya kullanılan model)
- Tinkercad hesap
- Arduino IDE yazılımı
  
### Kurulum

1. Arduino kodunu indirin veya Tinkercad üzerinde projeyi oluşturun.
2. Arduino'nuzu bilgisayarınıza bağlayın.
3. Arduino IDE'yi açın ve doğru kartı ve portu seçin.
4. Kodu yüklemek için 'Yükle' butonuna tıklayın.

### Çalıştırma

Projeyi çalıştırmak için aşağıdaki adımları izleyin:

1. Arduino'nuzu bağlayın ve kodu yükleyin.
2.  Donanımın Başlatılması:

Projede kullanılan tüm donanım bileşenlerinin doğru şekilde bağlanması önemlidir. Aşağıdaki adımları takip ederek donanımınızı hazırlayın:

1. **Arduino Bağlantısı:**
   - Arduino'nuzu bilgisayarınıza bağlayın ve doğru portu seçtiğinizden emin olun.
   - Arduino'nun bağlı olduğundan emin olmak için Arduino IDE'deki "Araçlar" menüsünden doğru kart modelini ve portu seçin (örneğin, "Arduino Uno" ve "COM3").

2. **Sensör Bağlantısı:**
   - [Sensör Adı] sensörünü Arduino'ya bağlayın. 
     - **VCC** pinini Arduino'nun **5V** pinine bağlayın.
     - **GND** pinini Arduino'nun **GND** pinine bağlayın.
     - **Sinyal Pin**'ini uygun dijital/analog pini (örneğin, **A0** veya **D2**) bağlayın.
   
3. **LED ve Aktüatör Bağlantıları:**
   - **LED**'i bağlamak için:
     - LED'in uzun bacağını (anot) Arduino'nun bir dijital pinine bağlayın (örneğin, **D13**).
     - Kısa bacağını (katot) ise bir direnç aracılığıyla GND'ye bağlayın (örneğin, **220Ω** direnç).
   - **Motor veya başka aktüatör**ler varsa, onları uygun pinlere bağlayın ve gerekirse güç kaynağını bağlayın.

4. **Bağlantı Kontrolü:**
   - Tüm bağlantıları kontrol edin. Gerekirse bağlantıların doğru olduğundan emin olmak için devreyi bir kez gözden geçirin.

5. **Güç Verme:**
   - Arduino'nuzu bilgisayarınızdan ayırarak dış bir güç kaynağı kullanıyorsanız, Arduino'nuzun güç kaynağını açın (örneğin, 9V pil veya adaptör).
   - Arduino'nun gücünün doğru şekilde çalıştığından emin olmak için güç göstergelerini kontrol edin (örneğin, LED'ler).

6. **Tinkercad Simülasyonu:**
   - Eğer projeyi Tinkercad üzerinde simüle ediyorsanız, bağlantılarınızı doğru şekilde sanal olarak kurduğunuzdan ve tüm bileşenlerin doğru şekilde çalıştığından emin olun.
   - Tinkercad simülasyonunu başlatın ve doğru çalıştığını test edin.

## Proje Açıklaması
Bu proje, Arduino platformu kullanarak birçok farklı faaliyeti gerçekleştiren bir sistemdir. Proje, Tinkercad üzerinden simülasyonlar oluşturulmuş ve çeşitli uygulamaları gerçekleştiren Arduino kodlarını içermektedir.

### Özellikler
- Arduino kartıyla test edilebilir.
- Tinkercad simülasyonu üzerinden test edilebilir.
- İçeriği oldukça zengin ve işlevseldir, başlangıç seviyesindeki kullanıcılar için uygun adımlarla ilerler.

## İletişim
Projeye dair sorularınız veya önerileriniz için bana şu şekilde ulaşabilirsiniz:
- E-posta: mervekrgll44@icloud.com
- GitHub: https://github.com/merve-karagulle


