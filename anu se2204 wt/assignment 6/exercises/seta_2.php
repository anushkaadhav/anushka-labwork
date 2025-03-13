<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Student Search</title>
    <script language="javascript">
        
        var students = [
            "Anushka", "tanish", "Anil", "tejas", 
            "mayur", "samrath", "manisha", "savita"
        ];

        
        function searchStudents() 
        {
            var input = document.getElementById("search").value;
            var output = document.getElementById("results");
            
          
            var matchingStudents = [];
            
            
            for (var i = 0; i < students.length; i++) 
            {
                if (students[i].toLowerCase().includes(input.toLowerCase())) 
                {
                    matchingStudents.push(students[i]);
                }
            }
            
          
            output.innerHTML = "";
            if (matchingStudents.length > 0) 
            {
                for (var j = 0; j < matchingStudents.length; j++)
                 {
                    var listItem = document.createElement("li");
                    listItem.textContent = matchingStudents[j];
                    output.appendChild(listItem);
                }
            } else 
            {
                output.innerHTML = "<li>No matching students found</li>";
            }
        }
    </script>
</head>
<body>
    <h2>Search Student Names</h2>
    <input type="text" id="search" onkeyup="searchStudents()" placeholder="Type a name...">
    <ul id="results"></ul> 
</body>
</html>

