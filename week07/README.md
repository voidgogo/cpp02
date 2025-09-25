```mermaid
classDiagram
    class Person {
        +string name
    }
    
    class UndergraduateStudent {
        +double gpa
        +warn() void
    }
    
    class DormitoryStudent {
        +int roomNumber
        +warn() void
    }
    
    class UndergraduateDormitoryStudent {
        %% ��ӹ��� �����
        %% +string name (from Person)
        %% +double gpa (from UndergraduateStudent)  
        %% +int roomNumber (from DormitoryStudent)
        %% +warn() void (ambiguous - needs scope resolution)
    }
    
    %% ���� ��� ���� (Diamond Problem �ذ�)
    Person <|-- UndergraduateStudent : "virtual public inheritance"
    Person <|-- DormitoryStudent : "virtual public inheritance"
    
    %% ���� ���
    UndergraduateStudent <|-- UndergraduateDormitoryStudent : "public inheritance"
    DormitoryStudent <|-- UndergraduateDormitoryStudent : "public inheritance"
    
```