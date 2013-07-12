#(For PayU Ukraine and Russian ONLY)
------

!! Внимание !!
Для мерчантов из России обязательно нужно указать ссылку LU.

#Модуль для CMS Drupal 7 Commerce ( Kickstart ) 
======


IPN : http://{домен сайта}/payu/result
или
IPN : http://{домен сайта}/?q=/payu/result


#Установка
-------------
1. Скопировать папку commerce_payu в папку /{корень сайта}/profiles/commerce_kickstart/modules/contrib/
2. Зайти в админку сайта
2.1 Выбрать меню "Настройки сайта" -> "Модули"
2.2 Выбрать модуль Сommerce PayU и установить
![Установка][0]
3. Перейти в раздел "Настройки сайта" -> "Платежные методы"
3.1 Найти метод PayU и нажать кнопку редактировать
![Настройка шаг 1][1]
3.2 Перейти к разделу "Действия" и нажать кнопку "Редактировать"
![Настройка шаг 2][2]
3.3 Ввести конфигурационные данные
![Конфигурация][3]

[0]: https://raw.github.com/PayUUA/Drupal7-kickstart/master/install1.png
[1]: https://raw.github.com/PayUUA/Drupal7-kickstart/master/to_settings.png
[2]: https://raw.github.com/PayUUA/Drupal7-kickstart/master/to_settings2.png
[3]: https://raw.github.com/PayUUA/Drupal7-kickstart/master/settings.png