import pygame

class Window:
    def __init__(self):
        pygame.init()
        self.screen = pygame.display.set_mode((1000, 400))
        self.clock = pygame.time.Clock()
        
        self.font = pygame.font.Font('arial_narrow_7.ttf', 40)

    def write(self, text, x, y):
        surface = self.font.render(text, True, (255, 0, 0))
        rect = surface.get_rect()
        rect.topleft = (x, y)
        self.screen.blit(surface, rect)

    def event(self):
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                self.running = False

    def update(self):
        pass

    
    def sort(self, array):
        self.running = True
        while (self.running):
            self.event()
            self.update()

            self.screen.fill((255, 255, 255))
            for i, a in enumerate(array):
                self.write(str(a), i*40+30, 20)
                
            pygame.display.flip()

            self.clock.tick(60)