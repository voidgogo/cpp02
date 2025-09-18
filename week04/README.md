```mermaid

classDiagram
    class Pokemon {
        +Pokemon()
        +~Pokemon() virtual
        +attack() virtual void
    }
    
    class Pikachu {
        +Pikachu()
        +~Pikachu()
        +attack() void
    }
    
    class Squirtle {
        +Squirtle()
        +~Squirtle()
        +attack() void
    }

    Pokemon <|-- Pikachu : inheritance
    Pokemon <|-- Squirtle : inheritance
   ```
