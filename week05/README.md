```mermaid
classDiagram
    class Animal {
        <<abstract>>
        +makeSound()* void
    }
    
    class Dog {
        +makeSound() void
    }
    
    class Cat {
        +makeSound() void
    }
    
    %% ��� ����
    Animal <|-- Dog : inherits
    Animal <|-- Cat : inherits
    
    %% Ŭ���� ��Ÿ�ϸ�
    class Animal {
        <<interface>>
    }   
```