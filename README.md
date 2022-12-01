# Qt C++ DataBase Application
Данное приложение реализует взаимодействие с базой данных по учету автомобилей и автомобильных заправочных станций.
В приложении реализовано 3 различных уровня доступа:
1) Пользователь. Возможности: Просмотр информации из базы данных, сортировка полей в таблице по каждому из полей, выгрузка информации из базы в PDF-формате, а также в формате текстового файла.
2) Администратор. Возможности: Добавление, изменение и удаление записей из базы данных. Добавить информацию представляется возможным не только с помощью специальных полей для ввода информации, но и благодаря специальной опции "Загрузить из файла". Выполнение данного действия подгружает в таблицу базы данные из внешнего текстового файла.
3) Директор. Возможности: Выполнение специализированных вопросов к базе, таких как "АЗС, доступные для заправки заданному автомобилю" и так далее.

Для запуска данного приложения потребуется установленный на локальной машине фреймворк Qt версии не ранее 5.10. В реализуемом приложении используется версия 6.2.2 (Для лучшей совместимости рекомендуется использовать именно ее).
Для корректной сборки проекта требуется держать файлы исходных текстов и сборщика в одной директории, в противном случае проект не соберется.
