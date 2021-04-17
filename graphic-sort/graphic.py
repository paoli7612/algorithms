import pygame

from number import Number

pygame.init()

class Window:
    def __init__(self):
        self.screen = pygame.display.set_mode((1000, 400))
        self.clock = pygame.time.Clock()
        self.numbers = pygame.sprite.Group()
        self.font = pygame.font.Font('fonts/arial_narrow_7.ttf', 40)

    def nuovo_numero(self, numero):
        surface = self.font.render(str(numero), True, (255, 0, 0))
        n = Number(surface, len(self.numbers.sprites())*25 + 400, 200, numero)
        self.numbers.add(n)
    
    def imposta_numeri(self, *numeri):
        for numero in numeri:
            self.nuovo_numero(numero)

    def scambia(self, a, b):
        a.dest = b.rect.center
        b.dest = a.rect.center
    
    def minimo(self, start=0):
        sprites = self.numbers.sprites()
        m = sprites[start]
        for sprite in sprites[start+1:]:
            if sprite.n < m.n:
                m = sprite
        return m

    def event(self):
        for event in pygame.event.get():
            if event.type == 256:
                self.running = False

    def update(self):
        self.numbers.update()
    
    def selection_sort(self):
        self.scambia(self.numbers.sprites()[0], self.minimo(2))
        self.running = True
        while (self.running):
            self.event()
            self.update()

            self.screen.fill((255, 255, 255))
            self.numbers.draw(self.screen)
            pygame.display.flip()
            
            self.clock.tick(60)