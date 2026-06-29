--1. Display all students whose city is ‘RAJKOT’ and branch is ‘COMPUTER’. 
select * from student
where city ='rajkot' and branch ='computer'
--2. Retrieve names and SPI of students whose SPI is less than 7.00.
select sname,spi from student
where spi<7
--3. Display all details of students whose ID is between 103 and 107.
select * from student
where stdid between 103 and 107
--4. Retrieve Student ID, Name, and Branch of students whose branch is ‘MECHANICAL’.
select stdid,sname,branch from student
where branch='mechanical' 
--5. Display all records where the city is not ‘SURAT’.
select * from student
where city != 'surat'
--6. Display names of students whose branch is either ‘ELECTRICAL’ or ‘MECHANICAL’.
select sname from student
where branch in ('electrical','mechanical')
--7. Retrieve all students whose SPI is not between 6.0 and 8.0.
select * from student 
where spi not between 6 and 8
--8. Display details of students whose city is NULL. 
select * from student
where city is null
--9. Display all students whose SPI is greater than 8.0 and who do not belong to either COMPUTER or 
--CIVIL branch.
select * from student
where spi >8 and branch not in ('computer','civil')
--10. Display all students whose branch is NULL and whose city is not NULL.
select * from student
where branch is null and city is null 
--11. Retrieve students whose SPI is greater than 7.5 and less than 9.0 but whose IDs are not between 
--104 and 108.
select * from student
where spi>7.5 and spi<9 and stdid not between 104 and 108
--12. Retrieve all records where the city is RAJKOT and the branch is not COMPUTER.
select * from student
where city ='rajkot' and branch !='computer'
--13. Display students whose IDs are not between 102 and 107 and whose SPI is greater than 7.5.
select * from student
where stdid not between 102 and 107 and spi >7.5
--14. Retrieve students whose SPI is between 7.0 and 8.5 and who belong to COMPUTER, CIVIL, or 
--MECHANICAL branches.
select * from student
where spi between 7 and 8.5 and branch in ('computer','civil','mechanical')
--15. Display records where the branch is COMPUTER and city is not RAJKOT and SPI is greater than 
--7.0.
select * from student
where branch ='computer' and city !='rajkot' and spi>7 
--16. Retrieve student name and id along with the city whose city is RAJKOT and SPI is less than 8.0, or 
--whose city is SURAT and SPI is greater than 8.0.
select sname,stdid from student
where city ='rajkot' and spi<8 or city ='surat' and spi>8  
--17. Display students who belong to COMPUTER branch and have SPI greater than 8.0, or belong to 
--CIVIL branch and have SPI greater than 7.0.
select * from student
where branch ='computer' and spi>8 or branch ='civil' and spi>7
--18. Retrieve students whose IDs are in the range 101–110 but not in the range 104–107.
select * from student
where stdid between 101 and 110 and stdid not between 104 and 107
--19. Display students whose city is RAJKOT and branch is COMPUTER, or whose city is SURAT and 
--branch is CIVIL.
select * from student
where branch ='computer'and city='rajkot' or city='surat' and branch='civil'
--20. Retrieve student names whose city is neither RAJKOT nor SURAT.
select * from student
where city not in ('rajkot','surat')