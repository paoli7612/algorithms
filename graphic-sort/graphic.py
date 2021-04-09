import pygame

from number import Number

pygame.init()

class Window:
    def __init__(self):
        self.screen = pygame.display.set_mode((1000, 400))
        self.clock = pygame.time.Clock()
        self.numbers = pygame.sprite.Group()
        self.font = pygame.font.Font('arial_narrow_7.ttf', 40)

    def write(self, text, x, y):
        surface = self.font.render(text, True, (255, 0, 0))
        rect = surface.get_rect()
        rect.topleft = (x, y)
        self.screen.blit(surface, rect)

    def event(self):
        for event in pygame.event.get():
            if event.type == 256:
                self.running = False

    def update(self):
        pass
    
    def selection_sort(self, array):
        for i, a in enumerate(array):
            surface = self.font.render(str(a), True, (255, 0, 0))
            n = Number(surface, i*25 + 200, 200)
            self.numbers.add(n)

        self.running = True
        while (self.running):
            self.event()
            self.update()

            self.screen.fill((255, 255, 255))
            self.numbers.draw(self.screen)
            pygame.display.flip()

            self.clock.tick(60)