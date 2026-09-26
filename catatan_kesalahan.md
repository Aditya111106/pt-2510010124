# Catatan Kesalahan Program
| Berkas | Jenis kesalahan | Pesan yang muncul | Cara kamu mengetahuinya |
|---|---|---|---|
| k1_sintaks.cpp | Kesalahan sintaks terjadi karena terdapat aturan penulisan kode yang tidak sesuai dengan sintaks C++. | `tempCodeRunnerFile.cpp:5:5: error: expected ',' or ';' before 'std'` | Kesalahan dapat diketahui melalui pesan dari compiler ketika kode sedang diperiksa atau dikompilasi. |
| k2_nama.cpp | Kesalahan nama terjadi karena program menggunakan nama variabel yang salah atau variabel tersebut belum pernah dibuat. | `k2_nama.cpp:8:31: error: 'Nilai' was not declared in this scope; did you mean 'nilai'?` | Dapat diketahui dari keterangan compiler yang menyatakan bahwa nama variabel tersebut tidak dikenali dalam program. |
| k3_runtime.cpp | Kesalahan runtime adalah masalah yang muncul ketika program sudah dijalankan dan melakukan proses tertentu. | `Jumlah mahasiswa: 0` | Diketahui ketika program dijalankan, lalu program berhenti atau tidak melanjutkan proses sebagaimana mestinya setelah memasukkan nilai 0.|
| k4_logika.cpp | Kesalahan logika terjadi ketika alur atau perhitungan dalam program kurang tepat sehingga menghasilkan output yang tidak sesuai. | `Rata-rata: 81` | Diketahui dengan mengecek dan membandingkan hasil keluaran program dengan hasil perhitungan yang seharusnya, yaitu 81,67. |

# Pendapat
Menurut saya, kesalahan logika adalah kesalahan yang cukup berbahaya karena program masih bisa dijalankan dan tidak selalu memberikan pesan error. Meskipun terlihat berjalan normal, hasil yang diperoleh dapat keliru. Oleh karena itu, hasil program perlu diperiksa dan dibandingkan dengan perhitungan yang benar agar kesalahan tersebut dapat ditemukan.