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
    
    Pokemon <|-- Pikachu : inheritance
   ```