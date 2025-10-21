# Sharpe Oranı Hesaplayıcı (C Programı)

Bu proje, finansal piyasalarda kullanılan **Sharpe Oranı (Sharpe Ratio)**'nu hesaplayan basit bir C programıdır. Program, kullanıcıdan yatırımın beklenen getirisi, risksiz faiz oranı ve portföyün standart sapması (riski) değerlerini alarak Sharpe oranını hesaplar ve sonucu yorumlar.

---

## 💡 Sharpe Oranı Nedir?

Sharpe oranı, bir yatırımın **risk başına elde ettiği fazladan getiriyi** ölçen bir performans göstergesidir. Formülü şöyledir:

```
Sharpe Oranı = (Getiri - Risksiz Faiz Oranı) / Risk
```

Oran yorumlaması:

| Sharpe Değeri | Yorum               |
| ------------- | ------------------- |
| < 1.0         | Düşük performans    |
| 1.0 – 2.0     | İyi performans      |
| 2.0 – 3.0     | Çok iyi performans  |
| > 3.0         | Mükemmel performans |

---

## ⚙️ Programın Özellikleri

* Kullanıcıdan yüzdesel değerler (% olarak) alır
* Yanlış girişlerde uyarı verir ve tekrar giriş ister
* Risk (standart sapma) sıfır girildiğinde hata mesajı gösterir
* Hesaplanan Sharpe oranını 2 ondalık basamakla ekrana yazdırır
* Sonucu açıklayıcı yorumla birlikte gösterir

---

## 🧩 Örnek Kullanım

**Girdi:**

```
Yatirimin getirisini (%) giriniz: 15
Risksiz faiz oranini (%) giriniz: 5
Portfoyun standart sapmasini (%) giriniz: 12
```

**Çıktı:**

```
---------------------------------
Sharpe orani: 0.83
Bu oran dusuk kabul edilir.
---------------------------------
```

---

