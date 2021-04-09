import pygame

class Window:
    def __init__(self):
        self.screen = pygame.display.set_mode((200, 200))
        self.clock = pygame.time.Clock()
        self.loop()

    def loop(self):
        self.running = True
        while (self.running):
            self.event()
            self.update()
            self.draw()
            self.clock.tick(60)
        
    def event(self):
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                self.running = False
    def update(self):
        pass
    def draw(self):
        pass